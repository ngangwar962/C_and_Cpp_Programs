#include<iostream>
#include<stack>
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
	node *head=NULL;
	int n,val;
	cin>>n;
	while(n)
	{
		cin>>val;
		insert(&head,val);
		n--;
	}
	display(&head);
	stack<node*> st;
	if(head==NULL)
	return 0;
	node *ptr=head;
	while(ptr->next!=NULL)
	{
		st.push(ptr);
		ptr=ptr->next;
	}
	head=ptr;
	int k;
	cout<<"enter the value of k"<<endl;
	cin>>k;
	node *temp=head;
	int count=0;
	while((!st.empty())&&(count<k-1))
	{
		temp->next=st.top();
		st.pop();
		temp=temp->next;
		count++;
	}
	temp->next=NULL;
	display(&head);
	return 0;
}
