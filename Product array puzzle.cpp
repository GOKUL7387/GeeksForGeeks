link: https://www.geeksforgeeks.org/problems/product-array-puzzle4525/1

code:

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        vector<int> a;
        int x=0;
        int result=1;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=0;j<arr.size();j++)
            {
                if(j!=x)
                {
                    result*=arr[j];
                }
                else
                {
                    continue;
                }
            }
            a.push_back(result);
            result=1;
            x++;
        }
        return a;
    }
};
