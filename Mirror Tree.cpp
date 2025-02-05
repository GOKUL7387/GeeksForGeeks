link: https://www.geeksforgeeks.org/problems/mirror-tree/1

code:

class Solution {
  public:
    void mirror(Node* node) 
    {
        if(!node) return;
        swap(node->left, node->right);
        mirror(node->left);
        mirror(node->right);
    }
};
