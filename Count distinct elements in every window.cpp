link: https://www.geeksforgeeks.org/problems/count-distinct-elements-in-every-window/1

code:

class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        int n = arr.size(); 
      unordered_map<int,int>map;
      vector<int>ans; 
      int count = 0; 
     for(int i = 0; i<k; i++){
         if(map[arr[i]]==0){
             count++; 
             
         }
         
         map[arr[i]]++; 
     }
     
     ans.push_back(count); 
     
     for(int i= k; i< n; i++){
         map[arr[i-k]]--; 
         if(map[arr[i-k]]==0)count--; 
        if(map[arr[i]]==0){
             count++; 
         }
         ans.push_back(count); 
         map[arr[i]]++; 
     }
     
     
     return ans; 
    }
};
