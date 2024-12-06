link: https://www.geeksforgeeks.org/problems/find-h-index--165609/1

code:

class Solution {
  public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int citation = 0;
        int n = citations.size();
        for(int i= n-1;i>=0;i--)
        {
            int a = min(citations[i],n-i);
            citation = max(citation, a);
        }
        return citation;
    }
};
