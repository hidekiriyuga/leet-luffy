class Solution {
public:
    bool getItinerary(string from, int n, unordered_map<string, vector<string>>& destinations, vector<string>& itinerary){
        itinerary.push_back(from);

        if (itinerary.size() == n + 1){
            return true;
        }

        for (string& to : destinations[from]){
            if (!to.empty()){
                string nextTo = to;
                to.clear();  
                if (getItinerary(nextTo, n, destinations, itinerary)){
                    return true;
                }
                to = nextTo;  
            }
        }

        itinerary.pop_back();
        return false;
    }

    vector<string> findItinerary(vector<vector<string>>& tickets) {
        sort(tickets.begin(),tickets.end());
        unordered_map<string, vector<string>> destinations;
        int n = tickets.size();

        for (int i = 0; i < n; i++){
            

            destinations[tickets[i][0]].push_back(tickets[i][1]);
        }

       /* for (auto& p : destinations){
            sort(p.second.begin(), p.second.end());
        }*/

        vector<string> itinerary;
        getItinerary("JFK", n, destinations, itinerary);
        return itinerary;
    }

};