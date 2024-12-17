link: https://www.geeksforgeeks.org/problems/aggressive-cows/1

code:

class Solution {
  public:
bool isPossible(int &mid,vector<int>&stalls,int k)
{
    int temp=stalls[0];
    int cnt=1;
    for(int i=1;i<stalls.size();i++)
    {
        if(stalls[i]-temp>=mid)
        {
            temp=stalls[i];
            cnt++;
        }
        if(cnt==k)
        return true;
    }
    return false;
}
    int aggressiveCows(vector<int> &stalls, int k) {
        sort(stalls.begin(),stalls.end());
        int low=1;
        int high=stalls.back()-stalls[0];
        int ans=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(isPossible(mid,stalls,k))
            {
                ans=max(ans,mid);
                low=mid+1;
            }
            else
            high=mid-1;
        }
        return ans;
    }
};
