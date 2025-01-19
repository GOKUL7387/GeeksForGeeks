link: https://www.geeksforgeeks.org/problems/rotate-a-linked-list/1

code:

class Solution {
  public:
    Node* rotate(Node* head, int k) 
    {
        int n=0;
        Node *temp=head;
        while(temp!=NULL)
        {
            temp=temp->next;
            n++;
        }
        k=k%n;
        
        Node *front=head;
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
            
        }
        
        while(k!=0)
        {
             head=head->next;
             front->next=NULL;
             temp->next=front;
             temp=front;
             front=head;
             k--;
        }
        
        return head;
    }
};
