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
	node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL";
	return;
}
int main()
{
	int i,j,k,l;
	node *head=NULL;
	int n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		insert(head,temp);
	}
	display(head);
	return 0;
}
