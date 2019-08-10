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
	node *ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"->";
		ptr=ptr->next;
	}
	cout<<"NULL\n";
	return;
}
void reverse(node *&head)
{
	node *prev=NULL,*cur=head,*first;
	while(cur!=NULL)
	{
		first=cur->next;
		cur->next=prev;
		prev=cur;
		cur=first;
	}
	head=prev;
	return;
}
void insert_after(node *&head,int val1,int val2)
{
	node *temp=new node();
	temp->data=val2;
	if(head==NULL)
	return;
	node *ptr=head;
	while(ptr!=NULL&&ptr->data!=val1)
	{
		ptr=ptr->next;
	}
	if(ptr==NULL)
	cout<<"value not found"<<"\n";
	else
	{
		temp->next=ptr->next;
		ptr->next=temp;
	}
	return;
}
void delete_selected(node *&head,int val)
{
	node *ptr=head;
	if(head==NULL)
	{
		cout<<"nothing to display"<<"\n";
		return;
	}
	node *prev=NULL;
	if(head->data==val)
	{
		head=ptr->next;
		free(ptr);
		return;
	}
	while(ptr!=NULL&&ptr->data!=val)
	{
		prev=ptr;
		ptr=ptr->next;
	}
	if(ptr==NULL)
	{
		cout<<"value not found"<<"\n";
		return;
	}
	else
	{
		prev->next=ptr->next;
		free(ptr);	
	}
	return;
}
int main()
{
	int i,j,k,n;
	node *head=NULL;
	cout<<"enter the number of nodes to be inserted into the list"<<"\n";
	cin>>n;
	int temp;
	for(i=0;i<n;i++)
	{
		cin>>temp;
		insert(head,temp);
	}
	int val2,val1;
	cout<<"enter the value to be inserted after which node and the node value to be inserted"<<"\n";
	cin>>val1>>val2;
	insert_after(head,val1,val2);
	display(head);
	cout<<"want to delete some node"<<"\n";
	cin>>val1;
	delete_selected(head,val1);
	display(head);
	cout<<"diplayed list was before the reverse"<<"\n";
	reverse(head);
	cout<<"reverse performed"<<"\n";
	display(head);
	return 0;
}
