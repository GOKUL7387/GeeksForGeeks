link: https://www.geeksforgeeks.org/problems/buy-stock-2/1

code:

class Solution {
  public:
    int maximumProfit(vector<int> &prices)
    {
        int n=prices.size();
        int ans=0;
        int x=prices[n-1];
        for(int i=n-1;i>=0;i--)
        {
            if(prices[i]<=x)
            {
                ans=max(ans,x-prices[i]);
            }
            else
            {
                x=prices[i];
            }
          
        }
        return ans;
    }
};
