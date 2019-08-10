#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};
void insert(node **head,int value)
{
	node *temp=new node();
	temp->data=value;
	temp->next=NULL;
	if(*head==NULL)
	{
		*head=temp;
		return;
	}
	node *tmp=*head;
	while(tmp->next!=NULL)
	{
		tmp=tmp->next;
	}
	tmp->next=NULL;
	return;
}
node *addition(node **head1,node **head2)
{
	node *ptr1=*head1;
	node *ptr2=*head2;
	node *head3=NULL;
	int carry=0;
	while(ptr1!=NULL||ptr2!=NULL)
	{
		int temp=ptr1->data+ptr2->data+carry;
		insert(&head3,temp%10);
		carry=temp/10;
		ptr1=ptr1->next;
		ptr2=ptr2->next;
	}
	while(ptr1!=NULL)
	{
		int temp=ptr1->data+carry;
		insert(&head3,temp%10);
		carry=temp/10;
		ptr1=ptr1->next;
	}
	while(ptr2!=NULL)
	{
		int temp=ptr2->data+carry;
		insert(&head3,temp%10);
		carry=temp/10;
		ptr2=ptr2->next;
	}
	while(carry)
	{
		insert(&head3,carry%10);
		carry=carry/10;
	}
	return head3;
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
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"NULL"<<"\n";
	return;
}
int main()
{
	node *head1=NULL;
	node *head2=NULL;
	insert(&head1,3);
	insert(&head1,3);
	insert(&head1,8);
	insert(&head2,5);
	insert(&head2,7);
	insert(&head2,8);
	display(head1);
	display(head2);
	head1=addition(&head1,&head2);
	display(head1);
	return 0;
}
