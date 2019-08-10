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
int maximum(node **head)
{
	node *temp=*head;
	int max=temp->data;
	while(temp!=NULL)
	{
		if(temp->data>max)
		max=temp->data;
		temp=temp->next;
	}
	return max;
}
void delete_element_right(node **head1,node **brand_new)
{
	node *ptr=*head1;
	while(ptr->next!=NULL)
	{
		int value=maximum(&ptr->next);
		if(value<ptr->data)
		{
			insert(&*brand_new,ptr->data);
		}
		ptr=ptr->next;
	}
	insert(&*brand_new,ptr->data);
	return;
}
void display(node **head)
{
	node *ptr=*head;
	if(ptr==NULL)
	{
		cout<<"nothing to display"<<endl;
		return;
	}
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
	int i,j,k;
	node *brand_new=NULL;
	node *head=NULL;
	int t;
	cout<<"enter the number of elements to be inserted into the linked list"<<endl;
	cin>>t;
	int val;
	while(t)
	{
		cin>>val;
		insert(&head,val);
		t--;
	}
	display(&head);
	delete_element_right(&head,&brand_new);
	display(&brand_new);
	return 0;
}
