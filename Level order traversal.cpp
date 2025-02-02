link: https://www.geeksforgeeks.org/problems/level-order-traversal/1

code:

class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) 
    {
        // Your code here
        vector<vector<int>> lvl;
        vector<int> temp;
        queue<Node *> qu;
        qu.push(root);
        int count = 0, l = 0;
        while(!qu.empty())
        {
            Node* ele = qu.front();
            qu.pop();
            temp.push_back(ele->data);
            if(count == pow(2, l) || qu.empty())
            {
                lvl.push_back(temp);
                temp.clear();
                l++;
            }
            count++;
            if(ele->left)
            {
                qu.push(ele->left);
            } 
            if(ele->right)
            {
                qu.push(ele->right);
            }
        }
        
        return lvl;
    }
};
