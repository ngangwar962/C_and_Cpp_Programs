#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};
void insert(node *&head,int val)
{
	node *temp=new node();
	temp->data=val;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		return;
	}
	node *ptr=head;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=temp;
	return;
}
void display(node *head)
{
	if(head==NULL)
	{
		cout<<"nothing to display"<<"\n";
		return;
	}
	node *ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"->";
		ptr=ptr->next;
	}
	cout<<"NULL"<<"\n";
	return;
}
void find_middle(node *head)
{
	node *ptr1=head;
	if(head==NULL)
	{
		cout<<"no element present"<<"\n";
		return;
	}
	if(ptr1->next==NULL)
	{
		cout<<ptr1->data<<"\n";
		return;
	}
	node *ptr2=head;
	while(ptr2!=NULL&&ptr2->next!=NULL)
	{
		ptr1=ptr1->next;
		ptr2=ptr2->next->next;
	}
	cout<<ptr1->data<<"\n";
	return;
}
int main()
{
	node *head=NULL;
	int i,j,k;
	int n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		insert(head,temp);
	}
	display(head);
	find_middle(head);
	return 0;
}
