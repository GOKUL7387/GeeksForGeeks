link: https://www.geeksforgeeks.org/problems/set-matrix-zeroes/1

code:

class Solution {
  public:
    void noofzeros(vector<vector<int>> &mat,vector<pair<int,int>> &rc){
      for(int i=0;i<mat.size();i++)
      {
          for(int j=0;j<mat[i].size();j++)
          {
              if(mat[i][j]==0)
              {
                  rc.push_back(make_pair(i,j));
              }
          }
      }
  }
  void setrow0(vector<vector<int>> &mat,int row)
  {
      fill(mat[row].begin(),mat[row].end(),0);
  }
  void setcol0(vector<vector<int>> &mat,int col)
  {
      for(int j=0;j<mat.size();j++)
      {
          mat[j][col]=0;
      }
  }
    void setMatrixZeroes(vector<vector<int>> &mat)
    {
        vector<pair<int,int>> rc;
        noofzeros(mat,rc);
        
        for(int i=0;i<rc.size();i++)
        {
            setcol0(mat,rc[i].second);
            setrow0(mat,rc[i].first);
        }
        
    }
};
