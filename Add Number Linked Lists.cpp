link: https://www.geeksforgeeks.org/problems/add-two-numbers-represented-by-linked-lists/1

code:

class Solution {

  public:

    Node* addTwoLists(Node* num1, Node* num2) {

        // code here

        string str1="", str2="";

        while(num1!=nullptr)
        {

            str1+=(num1->data+'0');

            num1=num1->next;

        }

        while(num2!=nullptr)
        {

            str2+=(num2->data+'0');

            num2=num2->next;

        }

        string ans="";

        int carry=0;

        int i=str1.size()-1, j=str2.size()-1;

        while(i>=0||j>=0||carry)
        {

            int sum=carry;

            if(i>=0) sum+=(str1[i--]-'0');

            if(j>=0) sum+=(str2[j--]-'0');

            carry=sum/10;

            ans+=(sum%10+'0');

        }

        Node* newHead=new Node(ans[0]-'0');

        Node* ptr=newHead;

        for(size_t k=1; k<ans.size(); k++)
        {

            ptr->next=new Node(ans[k]-'0');

            ptr=ptr->next;

        }

        newHead=reverse(newHead);

        while(newHead->data==0)
        {

            newHead=newHead->next;

        }

        return newHead;

    }

    Node* reverse(Node* head)
    {

        if(head==nullptr|| head->next==nullptr)
        {

            return head;

        }

        Node* newHead=reverse(head->next);

        Node* front=head->next;

        front->next=head;

        head->next=nullptr;

        return newHead;

    }

};
