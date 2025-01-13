link: https://www.geeksforgeeks.org/problems/container-with-most-water0535/1

code:

class Solution {

  public:
    int maxWater(vector<int> &arr) {
        int maxArea = 0;
        int i = 0;
        int j = arr.size()-1;
        while(i < j)
        {
            int area = min(arr[i],arr[j]) * (j - i);
            maxArea = max(area ,maxArea );
            if(arr[i]<arr[j])
            {
                i++;
            }
            else j--;
        }
        return maxArea;
    }
};
