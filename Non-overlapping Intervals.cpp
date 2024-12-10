link: https://www.geeksforgeeks.org/problems/non-overlapping-intervals/1

code:

class Solution {
  public:
    static int cmp(vector<int>& p1, vector<int>& p2)
    {
        return p1[1]<p2[1];
    }
    int minRemoval(vector<vector<int>> &intervals) 
    {
        int n=intervals.size(), count=0;
        sort(intervals.begin(), intervals.end(), cmp);
        int start=intervals[0][0], end=intervals[0][1];
        for(int i=1; i<n; ++i)
        {
            if(intervals[i][0]<end)
            {
                count++;
            }
            else
            {
                start=intervals[i][0];
                end=intervals[i][1];
            }
        }
        return count;
    }
};
