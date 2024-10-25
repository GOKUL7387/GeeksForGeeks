class Solution {

  public:
    vector<int> alternateSort(vector<int>& arr) {
        vector<int>a;
        sort(arr.begin(),arr.end());
        int i=0;
        int j=arr.size()-1;
        while(i<j)
        {
            a.push_back(arr[j]);
            a.push_back(arr[i]);
            i++;
            j--;
        }
        if(i==j)
            {
                a.push_back(arr[i]);
            }
        return a;
    }
};
