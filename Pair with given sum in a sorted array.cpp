link: https://www.geeksforgeeks.org/problems/pair-with-given-sum-in-a-sorted-array4940/1

code:

class Solution {
  public:
    int countPair(int k, vector<int> &arr) {
        int low = 0;
        int high = arr.size()-1;
        int count = 0;
        while(low<high)
        {
            int sum = arr[low]+arr[high];
            if(sum==k)
            {
                count++;
                high--;
                low++;
            }
            else if(sum>k)
            {
                high--;
            }
            else if(sum<k)
            {
                low++;
            }
        }
        return count;
    }
};
