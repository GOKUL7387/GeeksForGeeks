link: https://www.geeksforgeeks.org/problems/finding-middle-element-in-a-linked-list/1

code:

class Solution {
  public:
    int getMiddle(Node* head) {
        int count=0;
        vector<int>a;
        while(head!=NULL)
        {
            a.push_back(head->data);
            head=head->next;
        }
        int x=a.size()/2;
        return a[x];
    }
};
