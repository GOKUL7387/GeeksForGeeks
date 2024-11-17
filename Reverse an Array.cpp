link: https://www.geeksforgeeks.org/problems/reverse-an-array/1

code:

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int x=arr.size();
        vector<int>a;
        for(int i=x-1;i>=0;i--)
        {
            a.push_back(arr[i]);
        }
        arr = a;
    }
};
