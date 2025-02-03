link: https://www.geeksforgeeks.org/problems/height-of-binary-tree/1

code:

class Solution {
    int height1(Node* node)
    {
         if(node==NULL) return 0;
         int left = height1(node->left);
         int right = height1(node->right);
         
         int ans = max(left,right)+1;
         return ans;
    }
  public:
    // Function to find the height of a binary tree.
    int height(Node* node) 
    {
        
         int ans = height1(node);
         return ans-1;
    }
};
