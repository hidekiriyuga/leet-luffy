class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
vector<pair<int, int>> v;
        for (int i = 0; i < ranges.size(); ++i)
            v.push_back({max(0, i - ranges[i]), min(n, i + ranges[i])});
        
        sort(v.begin(), v.end()); 
        
        int taps = 0, currEnd = 0, maxEnd = 0;
        for (int i = 0; i < v.size(); ) {
            if (v[i].first > currEnd) {
                if (v[i].first > maxEnd) return -1;
                taps++; 
                currEnd = maxEnd; 
            } else {

                maxEnd = max(maxEnd, v[i].second);

                i++; // Move to the next event
                
                if (maxEnd >= n) return taps + 1;
            }
        }
        return currEnd >= n ? taps : -1;
    }
    
};