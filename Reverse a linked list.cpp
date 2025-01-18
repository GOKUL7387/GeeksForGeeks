link: https://www.geeksforgeeks.org/problems/reverse-a-linked-list/1

code:

class Solution {
  public:
    Node* reverseList(struct Node* head) 
    {
        Node*prev=NULL;
        Node* cur=head;
        Node*nex=head;
        
        while(nex){
            nex=nex->next;
            cur->next=prev;
            prev=cur;
            cur=nex;
            
        }
        return prev;
    }
};
