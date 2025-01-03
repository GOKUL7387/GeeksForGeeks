link: https://www.geeksforgeeks.org/problems/count-subarray-with-given-xor/1

code:

class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) 
    {
        map<long,long>mp;
        mp[0]++;
        long curr = 0;
        long ans = 0;
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            curr^=arr[i];
            ans += mp[(curr^k)];
            mp[curr]++;
        }
        return ans;
    }
};
