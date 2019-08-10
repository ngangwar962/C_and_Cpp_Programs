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
void count_elements(node **head)
{
	if(*head==NULL)
	{
		cout<<"no element present in the linked list"<<endl;
		return;
	}	
	int count=-1;
	node *ptr=*head;
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->next;
	}
	ptr=*head;
	int i;
	for(i=0;i<=(count/2);i++)
	{
		if(i==count/2)
		{
			cout<<"middle element is "<<ptr->data<<endl;
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
	int i,j,k,n;
	int ch,val;
	node *head=NULL;
	while(true)
	{
		cout<<"press 1 to insert node\npress 2 to display\npress 3 to count the element and print the middle element\npress 4 to exit\nenter your choice"<<endl;
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
				count_elements(&head);
				break;
			case 4:
				return 0;
		}
	}
	return 0;
}
