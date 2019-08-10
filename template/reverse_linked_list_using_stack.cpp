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
	node *head=NULL;
	stack<node*> st;
	int n;
	int val;
	cin>>n;
	while(n)
	{
		cin>>val;
		insert(&head,val);
		n--;
	}
	//display(&head);
	if(head==NULL)
	{
		cout<<"nothing to display"<<endl;
		return 0;
	}
	node *ptr=head;
	while(ptr->next!=NULL)
	{
		//cout<<ptr->data<<"->";
		st.push(ptr);
		ptr=ptr->next;
	}
	//cout<<"NULL"<<endl;
	head=ptr;
	node *temp=head;
	while(!st.empty())
	{
		temp->next=st.top();
		st.pop();
		temp=temp->next;
	}
	temp->next=NULL;
	display(&head);
	return 0;
}
