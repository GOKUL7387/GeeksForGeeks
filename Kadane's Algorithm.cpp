link: https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

code:

class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int count=INT_MIN;
        int sum=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            count=max(count,sum);
            if(sum<0)
            sum=0;
        }
        return count;
    }
};
