link: https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-with-distinct-elements/1

code:

class Solution 
{
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) 
  {
        set<int>mp;
        vector<int>ans;
        for(int i=0;i<a.size();i++)
        {
            mp.insert(a[i]);
        }
        
        for(int i=0;i<b.size();i++)
        {
            mp.insert(b[i]);
        }
        
        for (auto& i : mp)
        {
            ans.push_back(i);
        }
        return ans;
    }
};
