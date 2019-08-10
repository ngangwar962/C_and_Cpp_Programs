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
void conversion(node **head)
{
	node *ptr=*head;
	if(*head==NULL)
	{
		cout<<"sorry no node present"<<endl;
		return;
	}
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=*head;
	return;
}
void display(node **head)
{
	if(*head==NULL)
	{
		cout<<"nothing to display"<<endl;
		return;
	}
	node *temp=*head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
	return;
}
int main()
{
	int i,j,k,l;
	int n,val;
	cin>>n;
	node *head=NULL;
	while(n)
	{
		cin>>val;
		insert(&head,val);
		n--;
	}
	conversion(&head);
	display(&head);
	return 0;
	
}
