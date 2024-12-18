link:  https://www.geeksforgeeks.org/problems/peak-element/1

code:

class Solution {
  public:
    int peakElement(vector<int> &arr)
    {
        int n=arr.size();
        if(n==1) return 0;
        for(int i=0; i<n; i++)
        {
            if(i==0)
            {
                if(arr[0]>arr[1]) return 0;
            }
            else if(i==n-1)
            {
                if(arr[n-1]>arr[n-2]) return n-1;
            }
            else
            {
                if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
                {
                    return i;
                }
            }
        }
        return -1;
    }
};
