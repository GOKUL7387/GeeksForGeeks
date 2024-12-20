link: https://www.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1

code:

class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
        int top=0;
        int bot=matrix.size()-1;
        int left=0;
        int right=matrix[0].size()-1;
        int dir=1;
        vector<int>ans;
        while(top<=bot&&left<=right)
        {
            if(dir==1)
            {
                for(int i=left;i<=right;i++)
                {
                    ans.push_back(matrix[top][i]);
                }
                top++;
            }
            else if(dir==2)
            {
                for(int i=top;i<=bot;i++)
                {
                    ans.push_back(matrix[i][right]);
                }
                right--;
            }
            else if(dir==3)
            {
                for(int i=right;i>=left;i--)
                {
                    ans.push_back(matrix[bot][i]);
                }
                bot--;
            }
            else if(dir==4)
            {
                for(int i=bot;i>=top;i--)
                {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
            dir++;
            if(dir==5)
            {
                dir=1;
            }
        }
        return ans;
    }
};
