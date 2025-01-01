link: https://www.geeksforgeeks.org/problems/print-anagrams-together/1

code:

class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) 
    {
        vector<pair<string,int>>v;
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            string st = arr[i];
            sort(st.begin(),st.end());
            v.push_back({st,i});
        }
        sort(v.begin(),v.end());
        int i=0;
        vector<vector<string>>ans;
        while(i<n)
        {
            vector<string>group;
            group.push_back(arr[v[i].second]);
            i++;
            while(i<n && v[i].first==v[i-1].first)
            {
                group.push_back(arr[v[i].second]);
                i++;
            }
            ans.push_back(group);
        }
        return ans;
    }
};
