class Solution
{   
    public:
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        vector<int>y;
        int sum=0;
        int a=0;
        int b=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                {
                    sum+=matrix[i][j];
                }
                else if(i<j)
                {
                    a+=matrix[i][j];
                }
                else if(i>j)
                {
                    b+=matrix[i][j];
                }
                
            }
        }
        y.push_back(sum+a);
        y.push_back(sum+b);
        return y;
    }
};
