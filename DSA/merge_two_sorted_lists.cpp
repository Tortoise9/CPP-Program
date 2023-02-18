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
    ListNode* MergeTwoLists(ListNode* list1,ListNode* list2);
};
ListNode* solution :: MergeTwoLists(ListNode* list1,ListNode* list2){
ListNode *head , *ptr1=list1 , *ptr2=list2;
while(ptr1->next!=NULL && ptr2->next!=NULL){
if(ptr1->val > ptr2->val){
    head=ptr1;
}
}
}

int main(){
    ListNode *list1,*list2;
    solution s;
   list1= s.insertatbeg(list1,1);
   s.display(list1);
   list1=s.addnext(list1,2);
   list1=s.addnext(list1,4);
   s.display(list1);
    
   list2= s.insertatbeg(list2,1);
   s.display(list2);
   list2=s.addnext(list2,3);
   list2=s.addnext(list2,4);
   s.display(list2);
//    cout<<endl;
//    head=s.removenthFromEnd(head ,1);
// s.display(head);
   

   return 0;

}