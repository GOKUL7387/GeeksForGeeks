link: https://www.geeksforgeeks.org/problems/equilibrium-point-1587115620/1

code:

class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) 
    {
        int n=arr.size();
        vector<int>pre(n, 0), suf(n, 0);
        
        int sum=0;
        for(int i=0; i<n; i++)
        {
            pre[i]=sum;
            sum+=arr[i];
        }
        sum=0;
        for(int i=n-1; i>=0; i--)
        {
            suf[i]=sum;
            sum+=arr[i];
        }
        
        for(int i=0; i<n; i++)
        {
            if(pre[i]==suf[i]) 
            {
                return i;
            }
        }
        
        return -1;
    }
};
