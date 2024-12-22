link: https://www.geeksforgeeks.org/problems/search-in-a-matrix17201720/1

code:

class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    for(int i=0;i<N;i++)
	    {
	        for(int j=0;j<M;j++)
	        {
	            if(mat[i][j]==X)
	            {
	                return 1;
	            }
	        }
	    }
	    return 0;
	}
};
