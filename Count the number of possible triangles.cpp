link: https://www.geeksforgeeks.org/problems/count-possible-triangles-1587115620/1

code:

class Solution 
{
  public:
    int countTriangles(vector<int>& arr) 
    {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int c = 0;
        
        if(n<3)
        {
            return 0;
        }
        
        for(int i = n-1;i>=2;i--)
        {
            int j = 0, k = i-1;
            
            while(j<k)
            {
                if(arr[j] + arr[k] > arr[i])
                {
                    c += (k-j);
                    k--;
                }
                else
                {
                   j++; 
                }
            }
        }
        return c;
    }
};
