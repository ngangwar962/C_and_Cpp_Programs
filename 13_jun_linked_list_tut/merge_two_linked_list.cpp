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
		cout<<"nothing to display"<<endl;
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
void merge(node **head1,node **head2,node **head3)
{
	node *ptr1=*head1,*ptr2=*head2,*ptr3=*head3;
	int count=0;
	while(ptr1!=NULL&&ptr2!=NULL)
	{
		if(ptr1->data>ptr2->data)
		{
			insert(&*head3,ptr1->data);
			ptr1=ptr1->next;
			ptr2=ptr2->next;
		}
		else if(ptr1->data<ptr2->data)
		{
			insert(&*head3,ptr2->data);
			ptr2=ptr2->next;
			ptr1=ptr1->next;
		}
		else if(ptr1->data==ptr2->data)
		{
			insert(&*head3,ptr1->data);
			ptr1=ptr1->next;
			ptr2=ptr2->next;
		}		
	}
	
}
int main()
{
	int i,j,k;
	int n;
	node *head1=NULL,*head2=NULL,*head3=NULL;
	cin>>n;
	int a=n;
	int b;
	int val;
	while(a)
	{
		cin>>val;
		insert(&head1,val);
		a--;
	}
	b=n;
	while(b)
	{
		cin>>val;
		insert(&head2,val);
		b--;
	}
	display(&head1);
	display(&head2);
	merge(&head1,&head2,&head3);
	display(&head3);
	return 0;
}
