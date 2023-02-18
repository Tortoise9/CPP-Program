#include<iostream>
#include<iomanip>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
};
class solution{
    public:
    void display(ListNode* head){
        cout<<endl;
        ListNode* ptr=head;
        while(ptr!=NULL){
            cout<<ptr->val<<"\t";
            ptr=ptr->next;
        }
    }
    ListNode* create(){
       ListNode* temp = new ListNode;
        temp->next=NULL;
        return temp;
    }
    ListNode* insertatbeg(ListNode* head,int data){
        head=create();
       head->val=data;
       return head;
    }
    ListNode* addnext(ListNode* head,int data){
        ListNode* ptr = head,*temp;
        temp = create();
        temp->val=data;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=temp;
        return head;
    }
    ListNode* removenthFromEnd(ListNode*head,int n){
        int count=1; 
        ListNode *ptr=head,*p=head,*c;
        while(ptr->next!=NULL){
            count++;
            ptr=ptr->next;
        }
        cout<<count;
        for(int i=count ;i>n;i--){
            c=p;
            p=p->next;
        }
        c->next=p->next;
        free(p);
        return head;
    }
};

int main(){
    ListNode *head;
    solution s;
   head= s.insertatbeg(head,1);
   s.display(head);
   head=s.addnext(head,2);
   head=s.addnext(head,3);
   head=s.addnext(head,4);
   head=s.addnext(head,5);
   s.display(head);
   cout<<endl;
   head=s.removenthFromEnd(head ,1);
s.display(head);
   

   return 0;

}