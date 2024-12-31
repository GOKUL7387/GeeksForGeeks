link: https://www.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1


code:

class Solution {
  public:
     int longestConsecutive(vector<int>& arr) 
     {
        sort(arr.begin(),arr.end());
        int ans=INT_MIN;
        int cnt=1;
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i]==arr[i+1]-1)
            {
                cnt++;
            }
            else if(arr[i]==arr[i+1])
            {
                continue;
            }
            else 
            {
                ans=max(ans,cnt);
                cnt=1;
            }
        }
        ans=max(ans,cnt);
        return ans>0?ans:-1;
    }  
};
