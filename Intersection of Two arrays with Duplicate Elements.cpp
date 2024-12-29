link: https://www.geeksforgeeks.org/problems/intersection-of-two-arrays-with-duplicate-elements/1

code:

class Solution {
  public:
    vector<int> intersectionWithDuplicates(vector<int>& a, vector<int>& b) 
    {
        set<int> res;
        unordered_map<int,int> mpp;
        for (int i=0;i<a.size();i++)
        {
            mpp[a[i]]++;
        }
        for (int i=0;i<b.size();i++)
        {
            if (mpp.find(b[i])!=mpp.end()) 
            {
                res.insert(b[i]);
            }
        }
        vector<int> v(res.begin(),res.end());
        return v;
    }
};
