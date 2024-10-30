link: https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1

code:

class Solution {
public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> a;
        int n = arr.size();
        int r = arr[n - 1];
        a.push_back(r);
        for (int i = n - 2; i >= 0; i--)
        {
            if (arr[i] >= r)
            {
                a.push_back(arr[i]);
                r = arr[i];
            }
        }
        reverse(a.begin(), a.end());
        return a;
    }
};
