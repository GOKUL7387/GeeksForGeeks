link: https://www.geeksforgeeks.org/problems/overlapping-intervals--170633/1

code:

class Solution {
public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr)
    {
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        vector<int> ele = {-1, -1};
        for (vector<int>& x : arr) 
        {
            if (ele[0] == -1) 
            {
                ele = x;
            } 
            else 
            {
                if (ele[1] >= x[0])
                {
                    ele[1] = max(ele[1], x[1]);
                }
                else 
                {
                    ans.push_back(ele);
                    ele = x;
                }
            }
        }
        ans.push_back(ele);
        return ans;
    }
};
