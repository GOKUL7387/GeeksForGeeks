link: https://www.geeksforgeeks.org/problems/split-array-in-three-equal-sum-subarrays/1

code:

typedef long long int ll;
class Solution {
  public:
    vector<int> findSplit(vector<int>& arr) {
        ll sum = 0;
        for(auto &val:arr){
            sum += val;
        }
        if(sum%3 != 0){
            return {-1,-1};
        }
        ll curr = 0;
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            curr += arr[i];
            if(curr == sum/3){
                ans.push_back(i);
                curr = 0;
            }
            else if(curr > sum/3){
                return {-1,-1};
            }
        }
        if(ans.size() < 2){
            ans = {-1,-1};
        }
        return ans;
    }
};
