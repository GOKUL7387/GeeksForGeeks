link: https://www.geeksforgeeks.org/problems/largest-subarray-of-0s-and-1s/1

code:

class Solution {
  public:
    int maxLen(vector<int> &arr) 
    {
        int n=arr.size();
        unordered_map<int,int>mp;
        int sum=0;
        int maxi=0;
        mp[0]=-1;
        for(int i=0;i<n;i++)
        {
            sum+=(arr[i]==1)?-1:1;
            if(mp.find(sum)!=mp.end())
            {
                maxi=max(maxi,i-mp[sum]);
            }
            if(mp.find(sum)==mp.end())
            {
                mp[sum]=i;
            }
        }
        return maxi;
    }
};
