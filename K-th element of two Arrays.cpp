link: https://www.geeksforgeeks.org/problems/k-th-element-of-two-sorted-array1317/1

code:

class Solution {
  public:
    int kthElement(vector<int>& a, vector<int>& b, int k) {
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
        if(k<=x.size())
        {
            return x[k-1];
        }
        else
        {
            return 0;
        }
    }
};
