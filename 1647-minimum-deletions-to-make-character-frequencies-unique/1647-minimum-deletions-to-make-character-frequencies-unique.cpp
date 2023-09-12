class Solution {
public:
    int minDeletions(string s) {
        vector<int> v(26,0);
        for(char c:s){
            v[c-'a']++;
        }
        sort(v.begin(), v.end(), greater<int>());
	int keep = 0, prev = INT_MAX;
	for (int f : v) {
		if (!f || !prev) break;
		prev = min(f, prev - 1);
		keep += prev;
	}
	return s.size() - keep;
    }
};