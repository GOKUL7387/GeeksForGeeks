link: https://www.geeksforgeeks.org/problems/subarrays-with-sum-k/1

code:

class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) 
    {
        unordered_map<int,int> a;
        int sum = 0;
        int count = 0;
        
        for(i : arr)
        {
            sum += i;
            
            if(sum == k)
            {
                count++;
            }
            
            if(a.find(sum-k) != a.end())
            {
                count += a[sum - k];
            }
            a[sum]++;
        }
        return count;
    }
};
