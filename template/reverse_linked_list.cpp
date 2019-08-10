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
void reverse(node **head)
{
	node *prev=NULL,*cur=*head,*right;
	while(cur!=NULL)
	{
		right=cur->next;
		cur->next=prev;
		prev=cur;
		cur=right;
	}
	*head=prev;
	return;
}
int main()
{
	node *head=NULL;
	int n;
	cin>>n;
	int val;
	while(n)
	{
		cin>>val;
		insert(&head,val);
		n--;
	}
	display(&head);
	reverse(&head);
	display(&head);
	return 0;
}
