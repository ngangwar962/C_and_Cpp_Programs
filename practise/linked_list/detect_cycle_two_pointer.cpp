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
	node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL";
	return;
}
int detect_cycle(node *head)
{
	node *ptr1=head,*ptr2=ptr1->next->next;
	while((ptr1!=NULL||ptr2!=NULL)&&ptr2->next!=ptr1->next)
	{
		ptr1=ptr1->next;
		ptr2=ptr2->next->next;
	}
	if(ptr1==NULL||ptr2==NULL)
	return 0;
	else
	return 1;
}
int main()
{
	int i,j,k,l;
	node *head=NULL;
	int n;
	node *t1,*t2,*t3,*t4;
	t1=new node();
	t2=new node();
	t3=new node();
	t4=new node();
	t1->data=10;
	t2->data=20;
	t3->data=30;
	t4->data=40;
	t1->next=t2;
	t2->next=t3;
	t3->next=t4;
	t4->next=t1;
	head=t1;
	if(detect_cycle(head))
	cout<<"yes"<<"\n";
	else
	cout<<"No"<<"\n";
	return 0;
}
