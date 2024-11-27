link: https://www.geeksforgeeks.org/problems/smallest-positive-missing-number-1587115621/1

code:

class Solution 
{
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> arr) 
    {
        vector<int>a;
        vector<int>b;
        
        for(int i = 0;i < arr.size();i++)
        {
            if(arr[i] >= 0)
            {
                a.push_back(arr[i]);
            }
        }
        
        if(a.size() == 0)
        {
            return 1;
        }
        
        sort(a.begin(),a.end());
        int x = a.size();
        
        for (int i = 0; i < a.size(); i++) 
        {
            if (b.empty() || b.back() != a[i])
            {
                b.push_back(a[i]);
            }
        }
        for(int i = 0;i < x+100;i++)
        {
            if(b[0] >= 2)
            {
                return 1;
            }
            else if(b[0] == 1 or b[0] == 0)
            {
                if(b[i]+1 != b[i+1])
                {
                    return b[i]+1;
                }
            }
        }
    }
};
