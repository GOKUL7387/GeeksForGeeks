link: https://www.geeksforgeeks.org/problems/insert-interval-1666733333/1

code:

class Solution {
  public:
    vector<vector<int>> insertInterval(vector<vector<int>> &arr,vector<int> &newInterval)
    {
        vector<vector<int>>ans;
        bool inserted = false;
    for (int i = 0; i < arr.size(); i++) 
    {
        if (newInterval[0] < arr[i][0])
        {
            arr.insert(arr.begin() + i, newInterval);
            inserted = true;
            break;
        }
    }
    if (!inserted)
    {
        arr.push_back(newInterval);
    }
    for (int i = 0; i < arr.size(); i++) 
    {
        if (ans.empty() || ans.back()[1] < arr[i][0]) 
        {
            ans.push_back(arr[i]);
        } 
        else 
        {
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
        }
    }

    return ans;
    }
};
