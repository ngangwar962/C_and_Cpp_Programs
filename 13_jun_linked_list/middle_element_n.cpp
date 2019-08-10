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
void middle_element(node **head)
{
	node *p1=*head,*p2=*head;
	while(p2!=NULL&&p2->next!=NULL)
	{
		p1=p1->next;
		p2=p2->next->next;
	}
	cout<<"middle element data is "<<p1->data<<endl;
	return;
}
int main()
{
	int i,j,k;
	node *head=NULL;
	int ch,val;
	while(true)
	{
	cout<<"press 1 to insert the element into the linked list\npress 2 to display\npress 3 to display middle element\npress 4 to exit"<<endl;
	cin>>ch;
	switch(ch)
	{
		case 1:
		cin>>val;
		insert(&head,val);
		break;
		case 2:
		display(&head);
		break;
		case 3:
		middle_element(&head);
		break;
		case 4:
		return 0;
	}
	}
}
	
