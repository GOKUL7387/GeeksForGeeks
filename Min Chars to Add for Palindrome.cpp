link: https://www.geeksforgeeks.org/problems/minimum-characters-to-be-added-at-front-to-make-string-palindrome/1

code:

class Solution {
public:
    int minChar(string& s)
    {
        int n = s.size();
        string rev_s = s; 
        reverse(rev_s.begin(), rev_s.end());
        string combined = s + '#' + rev_s;
        int m = combined.size();
        vector<int> lps(m, 0);
        for (int i = 1; i < m; i++)
        {
            int len = lps[i - 1];
            while (len > 0 && combined[i] != combined[len]) 
            {
                len = lps[len - 1];
            }
            if (combined[i] == combined[len]) 
            {
                len++;
            }
            lps[i] = len;
        }
        return n - lps[m - 1];
    }
};
