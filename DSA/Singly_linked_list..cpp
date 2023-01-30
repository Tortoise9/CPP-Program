#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
struct Node {
	int data;
	struct Node *next ;
};
typedef struct Node* node;
void print(node head){
node ptr=head;
while(ptr!=NULL){
	cout<<"\t"<<ptr->data;
	ptr=ptr->next;
}
cout<<setw(30)<<endl;
}
node made(void){
	node temp=(node)malloc(sizeof(node));
	return temp;
	
}
node create(int d,node& head){
	node temp=made();
	temp->next=NULL;
	temp->data=d;
	head->next=temp;
	
	return head;
	
	
}
node createatbeg(node head, int d){
	node ptr=NULL;
	ptr=made();
	ptr->next=NULL;
	ptr->data=d;
	head=ptr;
	return head;
	
	
}
node addatlast(node head, int d){
	node last=head;
	node temp=made();
	temp->next=NULL;
	temp->data=d;
	while(last->next!=NULL){
		last=last->next;
	}
	last->next=temp;
	return head;
}
node addatany(node head,int position,int d){
	node ptr=head;
	node temp = made();

	while(position!=1 ){
		ptr=ptr->next;
		position--;	
	}
	temp->data=d;
	temp->next=ptr->next;
	ptr->next=temp;
	return head;
	
	
}
node deleteatbeg(node head){
	node ptr =head;
	head=ptr->next;
	free(ptr);
	ptr=NULL;
	return head;
}
node deleteatend(node head){
	node ptr=head,travel=head;
	while(ptr->next!=NULL){
		ptr=ptr->next;
	}
	while(travel->next!=ptr){
		travel=travel->next;
	}
	travel->next=NULL;
	free(ptr);
	ptr=NULL;
	return head;
}
void deleteatany(node &head,  int position){
	node temp = head;
	node ptr= head;
	for(int i=1;i<=position-1;i++){
		ptr=ptr->next;
	}
while(temp!=ptr->next){

	temp=temp->next;
	}
	ptr->next=temp->next;
	free(temp);
	

	
}
void reverse(node *head){
	node current
	 = *head;
	node prev =NULL,next1;
	
	while(current!=NULL){
	//	current->next=prev;//this will point to the null pointer by doing this we will
	//lost the address of next node so trying something else
	next1=current->next; 
	current->next=prev;
	prev=current;
	current =next1;
	}
	*head=prev;
}
int main(){
	node head =made();
	cout<<"\n At beg : "<<endl;
	head=createatbeg(head,34);
	print(head);
	head=create(4,head);
	print(head);
	cout<<"\nAt End : "<<endl;
	head=addatlast(head,1000);
	
	print(head);
	cout<<"\nAdding random : "<<endl;
	head=addatany(head,2,19);
	head=addatany(head,2,101);
	head=addatany(head,2,11);
	head=addatany(head,2,166);
	print(head);
	cout<<"\nDeletion"<<endl;
	head=deleteatbeg(head);
	print(head);
	head=deleteatend(head);
	print(head);
	cout<<"\ndeletion At any :  "<<endl;
	cout<<"\nat 3 "<<endl;
	deleteatany(head,3);
	print(head);
	cout<<"\nat 2"<<endl;
	deleteatany(head,2);
	print(head);
	cout<<"\nat 2"<<endl;
	deleteatany(head,2);
	print(head);
	cout<<"\nReverse "<<endl;
	reverse(&head);
	print(head);
	return 0 ;
}