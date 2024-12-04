link: https://www.geeksforgeeks.org/problems/check-if-strings-are-rotations-of-each-other-or-not-1587115620/1

code:

class Solution {
public:
    bool areRotations(string &s1, string &s2) 
    {
        if (s1.length() != s2.length())
        {
            return false;
        }
        s1 += s1;
        return (s1.find(s2) != string::npos);
    }
};
