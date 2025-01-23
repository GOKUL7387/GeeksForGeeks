link: https://www.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1

code:

class Solution {
  public:
    Node *cloneLinkedList(Node *head) {
        // Write your code here
        map<Node*,Node*> mp;
         Node* ptr=head;
        while(ptr)
        {
            mp[ptr]=new Node(ptr->data);
            ptr=ptr->next;
        }
        ptr=head;
        while(ptr)
        {
            mp[ptr]->next=mp[ptr->next];
            mp[ptr]->random=mp[ptr->random];
            ptr=ptr->next;
        }
        return mp[head];
    }


};
