link: https://www.geeksforgeeks.org/problems/count-pairs-in-array-divisible-by-k/1

code:

class Solution
{
    public:
    long long countKdivPairs(int A[], int n, int K)
    {
        unordered_map<int,int> mp;
        int long long count = 0;
        for(int i=0;i<n;i++)
        {
            int rem = A[i]%K;
            if(rem ==0)
            {
                count = count + mp[0];
            }
            else
            {
                count = count + mp[K-rem];
            }
            mp[rem]++;
        }
        return count;
    }
};
