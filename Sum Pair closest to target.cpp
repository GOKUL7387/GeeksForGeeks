link: https://www.geeksforgeeks.org/problems/pair-in-array-whose-sum-is-closest-to-x1124/1

code:

class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int target) 
    {
        sort(arr.begin(),arr.end());
        vector<int> res;
        int n=arr.size();
        int i=0;
        int j=n-1;
        int mini=INT_MAX;
        bool found=false;
        while(i<j)
        {
            int sum=arr[i]+arr[j];
            if(abs(target-sum)<mini)
            {
                mini=abs(target-sum);
                res={arr[i],arr[j]};
                found=true;
            }
            if(sum>target)j--;
            else i++;
        }
        return found?res:vector<int>();
    }
};
