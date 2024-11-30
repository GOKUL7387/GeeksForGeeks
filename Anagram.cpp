link: https://www.geeksforgeeks.org/problems/anagram-1587115620/1

code:

class Solution {
  public:
    // Function is to check whether two strings are anagram of each other or not.
    bool areAnagrams(string& s1, string& s2) {

        int arr1[26];
        int arr2[26];
        if(s1.size() != s2.size())
        {
            return false;
        }
        for(int i=0;i<26;i++)
        {
            arr1[i] = 0;
            arr2[i] = 0;
        }
        for(int i=0;i<s1.size();i++)
        {
            int a = s1[i] - 'a';
            int a1 = s2[i] - 'a';
            arr1[a]++;
            arr2[a1]++;
        }
        for(int i=0;i<26;i++)
        {
            if(arr1[i] != arr2[i])
            {
                return false;
            }
        }
        return true;
    }
        

};
