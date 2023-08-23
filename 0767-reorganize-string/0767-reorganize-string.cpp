class Solution {
public:
    string reorganizeString(string S) {
        string res="";
        unordered_map<char,int> mp;
        priority_queue<pair<int,char>>q;
        
        for(auto s: S)
            mp[s]+=1;
        
        for(auto m: mp)
            q.push(make_pair(m.second,m.first));
        
        while(q.size()>1){
            auto top1= q.top();
            q.pop();
            auto top2 = q.top();
            q.pop();
            
            res+=top1.second;
            res+=top2.second;
            
            top1.first -=1;
            top2.first -= 1;
            
            if(top1.first > 0)
                q.push(top1);
            
            if(top2.first > 0)
                q.push(top2);
        }
        
        if(!q.empty()){
            if(q.top().first > 1)
                return "";
            
            else
                res+=q.top().second;
        }
        
        return res;
    }
};