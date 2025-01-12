link: https://www.geeksforgeeks.org/problems/longest-distinct-characters-in-string5848/1

code:

int longestUniqueSubstr(string &s) {
        unordered_map<char, int> mp;
        
        int ans = 0;
        int n = s.size();
        int last = -1;
        for (int i = 0; i < n; i++){
            // cout << last << " " << i << endl;
            if (mp.find(s[i]) != mp.end()){
                last = max(last, mp[s[i]]);
            }
            ans = max(ans, i - last);
            mp[s[i]] = i;
        }
        
        return ans;
    }
