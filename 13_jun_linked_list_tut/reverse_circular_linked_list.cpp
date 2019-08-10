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
void display(node **head)
{
	if(*head==NULL)
	{
		cout<<"nothing to print"<<endl;
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
void reverse(node **head)
{
	node *prev=NULL;
	node *first=*head;
	node *last=NULL;
	node *current=*head;
	node *right=NULL;
	while(current->next!=*head)
	{
		right=current->next;
		current->next=prev;
		prev=current;
		current=current->next;
	}
	first->next=current;
	*head=current;
	return;
}
int main()
{
	node *head=NULL;
	int n,val;
	cin>>n;
	while(n)
	{
		cin>>val;
		insert(&head,val);
		n--;
	}
	node *ptr=head;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=head;
	display(&head);
	reverse(&head);
	display(&head);
	return 0;
}
