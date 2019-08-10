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
	cout<<"till here done"<<endl;
	node *ptr=*head;
	ptr->next=temp;
	*head=temp;
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
	int i,j,k;
	int n;
	cin>>n;
	int a[n];
	node *head=NULL;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=n-1;i>=0;i--)
	{
		insert(&head,a[i]);
	}
	return 0;
}
