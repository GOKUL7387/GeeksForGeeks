link: https://www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1

code:

class Solution {
  public:
    int reverseArray(vector<int>&a,int s,int e)
    {
        while(s<e)
        {
            swap(a[s],a[e]);
            s++;
            e--;
        }
    }
    void rotateArr(vector<int>&a, int d) 
    {
        int n=a.size();
        if (n == 0 || d == 0 || d == n) return;
        d=d%n;
            reverseArray(a,0,d-1);
            reverseArray(a,d,n-1);
            reverseArray(a,0,n-1);
       
    }
};
