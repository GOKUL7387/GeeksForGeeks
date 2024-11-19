link: https://www.geeksforgeeks.org/problems/next-permutation5226/1

code:

class Solution {
  public:
    void nextPermutation(vector<int>& arr) 
    {
        vector<int> res;
        int maximum = arr[arr.size()-1];
        int flag =0;
        res.push_back(maximum);
        for(int i = arr.size()-2;i>=0;i--)
        {
            if(arr[i] < maximum)
            {
             sort(res.begin(), res.end());
             int a = *upper_bound(res.begin(), res.end(), arr[i]);
             res.erase(remove(res.begin(), res.end(), a), res.end());
             res.push_back(arr[i]);
             arr[i] = a;
             i++;
             sort(res.begin(), res.end());
             int j=0;
             for(;i<arr.size();i++)
             {
                 arr[i] = res[j];
                 j++;
             }
             flag = 1;
             break;   
            }
            else
            {
                res.push_back(arr[i]);
                maximum = arr[i];
            }
        }
        if(!flag)
        {
            reverse(arr.begin(), arr.end());
        }
    }
};
