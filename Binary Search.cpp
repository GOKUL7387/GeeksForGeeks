link: https://www.geeksforgeeks.org/problems/binary-search-1587115620/1

code:

class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        int low = 0;
        int high = arr.size()-1;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(arr[mid]>k)
            {
                high = mid-1;
            }
            else if(arr[mid]<k)
            {
                low = mid+1;
            }
            else
            {
                return mid;
            }
        }
        return -1;
    }
};
