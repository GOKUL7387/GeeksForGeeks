link: https://www.geeksforgeeks.org/problems/max-circular-subarray-sum-1587115620/1

code:

class Solution {
  public:
    int circularSubarraySum(vector<int> &arr) 
    {

        int max_so_far = 0 ; 
        int min_so_far = 0; 
        int minSum = arr[0] ; 
        int maxSum = arr[0];
        int total = 0;
        for(int i=0;i<arr.size();i++)
        {
            
            max_so_far = max(max_so_far + arr[i],arr[i]);
            maxSum = max(maxSum,max_so_far);
            min_so_far = min(min_so_far + arr[i],arr[i]);
            minSum = min(minSum,min_so_far);
            total += arr[i];
        }
        return max(total - minSum,maxSum);
   
    }
};
