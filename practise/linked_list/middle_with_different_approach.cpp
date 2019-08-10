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
	int count=0;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"->";
		ptr=ptr->next;
		count++;
	}
	cout<<"NULL"<<"\n";
	int middle=count/2;
	ptr=head;
	count=0;
	while(count!=middle)
	{
		ptr=ptr->next;
		count++;
	}
	cout<<ptr->data<<"\n";
	return;
}
int main()
{
	int i,j,k;
	int n;
	node *head=NULL;
	cout<<"enter the number of nodes to be inserted into the linked list"<<"\n";
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
