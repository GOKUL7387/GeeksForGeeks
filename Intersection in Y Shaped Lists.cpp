link: https://www.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1

code:

class Solution {
  public:
     int intersectPoint(Node* head1, Node* head2) {

        while(head1 != NULL || head2 != NULL)
        {
            if(head1 == head2)
            {
                return head1->data;
            }
            if(head1->next == NULL)
            {
                head1 = head2;
            }
            if(head2->next == NULL)
            {
                head2 = head1;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        return -1;
    }
};
