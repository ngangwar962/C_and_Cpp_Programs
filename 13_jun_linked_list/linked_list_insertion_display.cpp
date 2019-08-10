#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};
void insertion(node **head)
{
	node *temp=new node();
	int val;
	cout<<"enter the value of the node"<<endl;
	cin>>val;
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
void insert_node(node **head)
{
	node *temp=new node();
	int val1,val;
	cout<<"enter the element after which insertion has to be performed"<<endl;
	cin>>val1;
	cout<<"enter the element to be inserted here"<<endl;
	cin>>val;
	temp->data=val;
	if(*head==NULL)
	{
		*head=temp;
		temp->next=NULL;
		return;
	}
	node *cur=*head;
	while((cur!=NULL)&&(cur->data!=val1))
	{
		cur=cur->next;
	}
	if(cur==NULL)
	{
		cout<<"element not found"<<endl;
		return;
	}
	else
	{
		temp->next=cur->next;
		cur->next=temp;
	}
	return;
}
void display(node **head)
{
	if(head==NULL)
	{
		cout<<"empty list"<<endl;
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
void deletion(node **head)
{
	int val;
	if(*head==NULL)
	{
		cout<<"empty linked list"<<endl;
		return;
	}
	cout<<"enter the element to be deleted"<<endl;
	cin>>val;
	node *temp=*head;
	if(temp->data==val)
	{
		*head=temp->next;
		delete(temp);
		return;
	}
	node *prev=NULL;
	while(temp!=NULL&&temp->data!=val)
	{
		prev=temp;
		temp=temp->next;
	}
	if(temp==NULL)
	{
		cout<<"value not found"<<endl;
		return;
	}
	else
	{
		prev->next=temp->next;
		delete(temp);
	}
	return;
}
int main()
{
	node *head=NULL;
	int t,val;
	cout<<"enter the number of elements to be inserted into the linked list"<<endl;
	cin>>t;	
	while(true)
	{
		cout<<"press 1 to insert\npress 2 to insert anywhere\npress 3 to delete\npress 4 to display\nenter your choice"<<endl;
		int ch;
		cin>>ch;
		switch(ch)
		{
		case 1:
		insertion(&head);
		break;
		case 2:
		insert_node(&head);
		break;
		case 3:
		deletion(&head);
		break;
		case 4:
		display(&head);
		break;
		}
	}
	return 0;
}
