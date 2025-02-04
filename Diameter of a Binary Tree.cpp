link: https://www.geeksforgeeks.org/problems/diameter-of-binary-tree/1

code:

class Solution 
{
     
     pair<int,int> diameterRec(Node* node)
     {
         if(node==NULL) return {0,0};
         pair<int,int>  left = diameterRec(node->left);
         pair<int,int>  right = diameterRec(node->right);
         
         pair<int,int> ans ;
         ans.first = max(left.first,right.first) + 1 ;
         int currDiameter = left.first + right.first ;
         ans.second = max(currDiameter,max(left.second,right.second));
         return ans ;
    }
    
  public:
    int diameter(Node* root) 
    {
       return  diameterRec(root).second; 
    }
};
