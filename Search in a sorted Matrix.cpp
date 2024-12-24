link: https://www.geeksforgeeks.org/problems/search-in-a-matrix-1587115621/1

code:

class Solution {
  public:
    bool searchMatrix(vector<vector<int>> &mat, int x) 
{
        int n=mat.size();
        int m=mat[0].size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==x)
                {
                    count++;
                    return 1;
                }
            }
        }
        if(count==0)
        {
            return 0;
        }
    }
};
