link: https://www.geeksforgeeks.org/problems/stock-buy-and-sell2615/1

code:

class Solution {
  public:
    int maximumProfit(vector<int> &prices) 
    {
        int profit=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i-1]<prices[i] )
            {
                     profit+=prices[i]-prices[i-1];
            }
        }
        return profit;
    }
};
