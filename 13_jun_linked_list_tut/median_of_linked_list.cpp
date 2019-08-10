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
int count_node(node **head)
{
	if(*head==NULL)
	return 0;
	node *ptr=*head;
	int count=0;
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->next;
	}
	return count;
}
void display(node **head,int count)
{
	if(*head==NULL)
	{
		cout<<"nothing to display"<<endl;
		return;
	}
	int var=0;
	node *ptr=*head;
	while(count!=var)
	{
		var++;
		ptr=ptr->next;
	}
	cout<<ptr->data<<endl;
	return;
}
int main()
{
	int i,j,k,l;
	int n,val;
	cin>>n;
	node *head=NULL;
	cout<<"enter the sorted linked list element"<<endl;
	while(n)
	{
		cin>>val;
		insert(&head,val);
		n--;
	}
	int count=count_node(&head);
	display(&head,count/2);
	return 0;
}
