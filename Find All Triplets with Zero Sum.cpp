link: https://www.geeksforgeeks.org/problems/find-all-triplets-with-zero-sum/1

code:

class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        vector<vector<int>> x;
        int n = arr.size();
        
        for(int i=0;i<n-2;i++)
        {
            for(int j=i+1;j<n-1;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(arr[i]+arr[j]+arr[k] == 0)
                    {
                        x.push_back({i,j,k});
                    }
                }
            }
        }
        return x;
    }
};
