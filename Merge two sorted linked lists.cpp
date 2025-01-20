link: https://www.geeksforgeeks.org/problems/merge-two-sorted-linked-lists/1

code:

class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) 
    {
        Node *ans = new Node(0);
        Node *newHead = ans;
        
        Node *ptr1 = head1, *ptr2= head2;
        
        while(ptr1 && ptr2) 
        {
            if(ptr1->data <= ptr2->data) 
            {
                ans->next = ptr1;
                ptr1 = ptr1->next;
            } 
            else {
                ans->next = ptr2;
                ptr2 = ptr2->next;
            }
            
            ans = ans->next;
        }
        
        while(ptr1) 
        {
            ans->next = ptr1;
            ans = ans->next;
            ptr1 = ptr1->next;
        }
        
        while(ptr2) 
        {
            ans->next = ptr2;
            ans = ans->next;
            ptr2 = ptr2->next;
        }
        
        return newHead->next;
    }
};
