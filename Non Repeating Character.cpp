link: https://www.geeksforgeeks.org/problems/non-repeating-character-1587115620/1

code:

class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonRepeatingChar(string S)
    {
        int arr[26];
        for(int i=0;i<26;i++)
        {
            arr[i] = 0;
        }
        for(int j=0;j<S.size();j++)
        {
            int c = S[j];
            int x = c-97;
            arr[x]++;
        }
        for(char chr : S)
        {
            int f = chr - 97;
            if(arr[f] == 1)
            {
                return chr;
            }
        }
        return '$';
    }

};
