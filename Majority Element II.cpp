link: https://www.geeksforgeeks.org/problems/majority-vote/1

code:

class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) 
    {
        vector<int> ans;
        int n=arr.size();
        int target=n/3;
        map<int,int> mp;
        for(auto x:arr)
        {
            mp[x]++;
        }
        
        for(auto x:mp)
        {
            if(x.second > target)
                ans.push_back(x.first);
        }
        
        return ans;
        
    }
};
