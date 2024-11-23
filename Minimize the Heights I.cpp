link: https://www.geeksforgeeks.org/problems/minimize-the-heights-i/1

code:

class Solution {
  public:
    int getMinDiff(int k, vector<int> &arr) {
        int n=arr.size();
        sort(arr.begin() , arr.end()) ; 
        int ans = arr[n-1] - arr[0] ; 
        for(int i=1;i<n;i++)
        {
            int mini = min(arr[0]+k , arr[i]-k) ; 
            int maxi = max(arr[i-1]+k , arr[n-1]-k) ; 
            ans = min(ans , maxi - mini) ; 
        }
        return ans; 
    }
};
