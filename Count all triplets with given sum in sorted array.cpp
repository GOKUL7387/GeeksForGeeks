link: https://www.geeksforgeeks.org/problems/count-all-triplets-with-given-sum-in-sorted-array/1

code:

class Solution 
{
  public:
    int countTriplets(vector<int> &arr, int target) 
    {
        int count=0;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                for(int k=j+1;k<arr.size();k++)
                {
                    if(arr[i]+arr[j]+arr[k]==target)
                    {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
