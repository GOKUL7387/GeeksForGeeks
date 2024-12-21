link: https://www.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1

code:

class Solution {
  public:
    void rotateby90(vector<vector<int>>& mat) {
        
        int n = mat.size();
        int m = n;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                swap(mat[j][i],mat[i][j]);
            }
            
        }
        int start = 0;
        int end=n-1;
        while(start<end)
        {
            for(int j=0;j<n;j++)
            {
                swap(mat[start][j],mat[end][j]);
            }
            start++;
            end--;
        }
        
    }
};
