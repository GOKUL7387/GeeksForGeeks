link: https://www.geeksforgeeks.org/problems/union-of-two-arrays3538/1

code:

class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        map<int,int> mp;
        for(int i=0;i<a.size();i++)
        {
            mp[a[i]] = mp[a[i]]+1;
        }
        for(int i=0;i<b.size();i++)
        {
            mp[b[i]] = mp[b[i]] +1;
        }
        int count = 0;
        for(auto u:mp)
        {
            if(u.second >0)
            {
                count++;
            }
        }
        return count;
    }
    
};
