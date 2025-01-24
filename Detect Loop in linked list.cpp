link: https://www.geeksforgeeks.org/problems/detect-loop-in-linked-list/1

code:

class Solution {
  public:
    // Function to check if the linked list has a loop.
    bool detectLoop(Node* head) 
    {
        Node* slow=head;
        if(!head || !head->next)return false;
        Node* fast=head->next->next;
        while(fast && fast->next)
        {
            if(slow==fast)return true;
            slow=slow->next;
            fast=fast->next->next;
        }
        return false;
    }
};
