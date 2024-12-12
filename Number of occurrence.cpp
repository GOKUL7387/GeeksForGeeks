link:  https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1

code:

class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int count=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==target)
            count++;
        }
        return count;
    }
};
