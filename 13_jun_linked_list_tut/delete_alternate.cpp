#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};
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
/*int count_nodes(node **head)
{
	int count=0;
	node *ptr=*head;
	if(*head==NULL)
	{
		return 0;
	}
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->next;
	}
	return count;
}*/
void operation(node **head)
{
	if(*head==NULL)
	{
		cout<<"empty list"<<endl;
		return;
	}
	cout<<"condition checked"<<endl;
	node *temp=*head;
	//cout<<temp->data;
	while(temp!=NULL)
	{
		cout<<(temp->data)<<"->";
		if(temp->next!=NULL)
		temp=temp->next->next;
		else
		break;
	}
	cout<<"NULL"<<endl;
	return;
}
int main()
{
	int i,j,k;
	int val,n;
	node *head=NULL;
	cout<<"total number of nodes to be inserted into the linked list"<<endl;
	cin>>n;
	while(n)
	{
		cin>>val;
		insert(&head,val);
		n--;
	}
	cout<<"insertion done"<<endl;
	display(&head);
	operation(&head);
	//display(&head);
	return 0;
}
