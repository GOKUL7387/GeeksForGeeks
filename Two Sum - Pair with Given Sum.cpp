link: https://www.geeksforgeeks.org/problems/key-pair5616/1

code:

class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) 
    {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        int s = 0;
        int e = n-1;
        while(s<e)
        {
            int sum = arr[s] + arr[e];
            if(sum == target)
            {
                return true;
            }
            if(sum < target)
            {
                s++;
            }
            else
            {
                e--;
            }
        }
        return false;
    }
};
