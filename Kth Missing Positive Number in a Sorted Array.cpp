link: https://www.geeksforgeeks.org/problems/kth-missing-positive-number-in-a-sorted-array/1

code:

class Solution {
  public:
    int kthMissing(vector<int> &arr, int k)
    {
        vector<int> v;
        int n= arr.size();
        int j=0;
        int i=1;
        for(;i<=arr[n-1];i++)
        {
            while(arr[j]<i)
            {
                v.push_back(i);
                i++;
            }
            if(arr[j]!=i)
            {
                v.push_back(i);
            }
            else
            {
                j++;
            }
        }
        if(v.size()<k)
        {
            int x = k;
            while(x--)
            {
                v.push_back(i);
                i++;
            }
        }
        return v[k-1];
    }
};
