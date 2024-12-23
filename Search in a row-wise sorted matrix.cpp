link: https://www.geeksforgeeks.org/problems/search-in-a-row-wise-sorted-matrix/1

code:

class Solution {
  public:
    bool searchRowMatrix(vector<vector<int>> &mat, int x) 
    {
        for(auto v:mat)
        {
            int idx=lower_bound(v.begin(),v.end(),x)-v.begin();
            if(v[idx]==x)
            return true;
        }
        return false;
    }
};
