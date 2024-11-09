link: https://www.geeksforgeeks.org/problems/root-to-leaf-paths-sum/1

code:

class Solution {
  public:
    int ans = 0;
    void solve(Node* root, int sum)
    {
        if(!root)
        {
            return;
        }
        sum = sum*10 + root->data;
        if(!root->left && !root->right)
        {
            ans += sum;
            return;
        }
        solve(root->left,sum);
        solve(root->right,sum);
        
    }
    int treePathsSum(Node *root) 
    {
        int sum = 0;
        solve(root,sum);
        return ans;
    }
};
