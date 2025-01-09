link: https://www.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1

code:

class Solution 
{
  public:
    vector<int> subarraySum(vector<int> &arr, int target) 
    {
        
        for(int i=0;i<arr.size();i++)
        {
            int sum=0;
            for(int j=i;j<arr.size();j++)
            {
                sum=sum+arr[j];
                if(sum==target)
                {
                    return{i+1,j+1};
                }
            }
        }
        return {-1};
    }
};
