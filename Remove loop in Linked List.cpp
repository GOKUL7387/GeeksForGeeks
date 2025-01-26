link: https://www.geeksforgeeks.org/problems/remove-loop-in-linked-list/1

code:

class Solution {
  public:
    // Function to remove a loop in the linked list.
    void removeLoop(Node* head) 
    {
        // code here
        Node *slow = head;
        Node *fast = head;
        
        while(fast!=NULL && fast->next != NULL)
        {
            slow = slow ->next;
            fast = fast ->next->next;
            
            if(slow == fast)
            {
                slow = head;
                while(slow != fast)
                {
                    slow = slow->next;
                    fast = fast->next;
                }
                
                Node *last = slow;
                while(last ->next != fast)
                {
                    last = last->next;
                }
                last ->next = NULL;
            }
        }
    }
};
