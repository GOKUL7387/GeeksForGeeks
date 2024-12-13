link: https://www.geeksforgeeks.org/problems/minimum-element-in-a-sorted-and-rotated-array3611/1

code:

class Solution {
  public:
    int findMin(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        return arr[0];
    }
};
