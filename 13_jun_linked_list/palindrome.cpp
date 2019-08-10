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
		cout<<"empty linked list"<<endl;
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
int count_elements(node **head)
{
	int count=-1;
	if(*head==NULL)
	{
		cout<<"nothing to count"<<endl;
		return 0;
	}
	node *ptr=*head;
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->next;
	}
	return count;
}
int find_k_index(node **head,int index)
{
	int i;
	if(*head==NULL)
	{
		cout<<"no element in the linked list"<<endl;
		return 0;
	}		
	node *ptr=*head;
	for(i=0;i<index;i++)
	{
		ptr=ptr->next;
	}
	return ptr->data;
}
void ispalindrome(node **head,int count)
{
	int start=0;
	int end=count;
	while(start<end)
	{
		if(find_k_index(&*head,start)!=find_k_index(&*head,end))
		{
			cout<<"not a palindrome"<<endl;
			return;	
		}
		start++;
		end--;
	}
	cout<<"is a palindrome"<<endl;
	return;
}
int main()
{
	int i,j,k;
	int val,ch;
	node *head=NULL;
	int count;
	while(true)
	{
		cout<<"press 1 to insert\npress 2 to display\npress 3 to check palindrome\npress 4 to exit\nenter your choice\n";
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
			count=count_elements(&head);
			ispalindrome(&head,count);
			break;
			case 4:
			return 0;
		}
	}
}

