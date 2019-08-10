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
int sum(node **head)
{
	int sum=0;
	if(*head==NULL)
	{
		return 0;
	}
	else
	{
		node *ptr=*head;
		while(ptr->next!=NULL)
		{
			if(ptr->data>ptr->next->data)
			{
				cout<<ptr->data<<" "<<endl;
				sum+=ptr->data;
			}
			ptr=ptr->next;
		}
	}
	return sum;
}
int main()
{
	int i,j,k;
	node *head=NULL;
	int t,val;
	cin>>t;
	while(t)
	{
		cin>>val;
		insert(&head,val);
		t--;
	}
	display(&head);
	int temp=sum(&head);
	node *ptr=head;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	if(ptr->data>head->data)
	{
		temp=temp+ptr->data;
	}
	cout<<temp<<endl;
	return 0;
}
