link: https://www.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1

code:

class Solution {
  public:
    int maxWater(vector<int> &arr) 
    {
        int totalWater = 0;
        int lmax=0;
        int rmax=0;
        int i=0;
        int j=arr.size()-1;
        while(i<j)
        {
            lmax = max(lmax , arr[i]);
            rmax = max(rmax , arr[j]);
            if(arr[i]<=arr[j])
            {
                totalWater += lmax - arr[i];
                i++;
            }
            else
            {
                totalWater += rmax - arr[j];
                j--;
            }
        }
        return totalWater;
    
    }
};
