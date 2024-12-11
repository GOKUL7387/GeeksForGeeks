link:  https://www.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1

code:

class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        vector<int>x;
        for(int i=0;i<a.size();i++)
        {
            x.push_back(a[i]);
        }
        for(int i=0;i<b.size();i++)
        {
            x.push_back(b[i]);
        }
        sort(x.begin(),x.end());
        for(int i=0;i<a.size();i++)
        {
            a[i]=x[i];
        }
        int j=0;
        for(int i=a.size();i<x.size();i++)
        {
            b[j]=x[i];
            j++;
        }
    }
};
