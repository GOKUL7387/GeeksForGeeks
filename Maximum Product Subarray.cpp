link: https://www.geeksforgeeks.org/problems/maximum-product-subarray3604/1

code:

class Solution {
public:
    int maxProduct(std::vector<int>& arr) 
    {
        int n = arr.size();
        int x = 1;
        int y = 1;
        int maxVal = INT_MIN;
        for (int i = 0, j = n - 1; i < n; i++, j--)
        {
            x *= arr[i];
            y *= arr[j];
            if (y > maxVal) 
            {
                maxVal = y;
            }
            if (x > maxVal)
            {
                maxVal = x;
            }
            if (x == 0) 
            {
                x = 1;
            }
            if (y == 0) 
            {
                y = 1;
            }
        }
        return maxVal;
    }
};
