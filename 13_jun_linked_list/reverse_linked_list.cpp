#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};
void insert(node **head,int val)
{
	node *temp=new node();
	temp->data=val;
	temp->next=NULL;
	if(*head==NULL)
	{
		*head=temp;
		return;
	}
	node *ptr=*head;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=temp;
	return;
}
void reverse(node **head)
{
	node *prev=NULL,*current=*head,*right;
	while(current!=NULL)
	{
		right=current->next;
		current->next=prev;
		prev=current;
		current=right;
	}	
	*head=prev;
	return;
}
void display(node **head)
{
	if(*head==NULL)
	{
		cout<<"nothing to display"<<endl;
		return;
	}
	node *ptr=*head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"->";
		ptr=ptr->next;
	}
	cout<<"NULL"<<endl;
	return;
}
int main()
{
	int i,j,k;
	int n;
	cout<<"enter the element to be inserted into the linked list"<<endl;
	cin>>n;
	int val;
	node *head=NULL;
	for(i=0;i<n;i++)
	{
		cin>>val;
		insert(&head,val);
	}
	display(&head);
	reverse(&head);
	display(&head);
	return 0;
}
