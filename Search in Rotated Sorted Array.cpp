link:  https://www.geeksforgeeks.org/problems/search-in-a-rotated-array4618/1

code:

class Solution {
  public:
    int search(vector<int>& arr, int key) {
        int count=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==key)
            {
                count++;
                return i;
            }
        }
        if(count==0)
        {
            return -1;
        }
    }
};
