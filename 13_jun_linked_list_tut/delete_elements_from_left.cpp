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
void delete_operation(node **head1,node **head2)
{
	node *ptr=*head1;
	if(*head1==NULL)
	{
		cout<<"nothing is present to be checked"<<endl;
		return;
	}
	insert(&*head2,ptr->data);
	int max=ptr->data;
	ptr=ptr->next;
	while(ptr!=NULL)
	{
		if(ptr->data>max)
		{
			max=ptr->data;
			insert(&*head2,max);
		}
		ptr=ptr->next;
	}
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
	int i,k,l;
	node *head=NULL,*head2=NULL;
	int t,val;
	cout<<"enter the number of nodes to be inserted into the linked list"<<endl;
	cin>>t;
	while(t)
	{
		cin>>val;
		insert(&head,val);
		t--;
	}
	display(&head);
	delete_operation(&head,&head2);
	display(&head2);
	return 0;
}
