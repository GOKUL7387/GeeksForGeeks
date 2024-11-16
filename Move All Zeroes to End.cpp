link: https://www.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1

code:

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        vector<int>a;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i] != 0)
            {
                a.push_back(arr[i]);
            }
        }
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i] == 0)
            {
                a.push_back(arr[i]);
            }
        }
        arr=a;
    }
};
