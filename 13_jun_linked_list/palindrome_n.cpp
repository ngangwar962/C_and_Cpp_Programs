#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};
node *middle=NULL;
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
int count_elements(node **head)
{
	int count=-1;
	if(*head==NULL)
	{
		cout<<"no element to be counted"<<endl;
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
void reverse(node **head)
{
	node *prev=NULL,*current=*head,*right=NULL;
	while(current!=NULL)
	{
		right=current->next;
		current->next=prev;
		prev=current;
		current=right;
	}
	*head=prev;
	return;
}
void ispalindrome(node **head)
{
	node *first=*head;
	int i;
	int count=count_elements(&*head);
	node *ptr=*head;
	int first_count=0;
	for(i=0;i<count/2;i++)
	{
		ptr=ptr->next;
		first_count++;
	}
	middle=ptr->next;
	ptr->next=NULL;
	reverse(&middle);
	while(middle!=NULL&&first!=NULL)
	{
		if(middle->data!=first->data)
		{
			cout<<"not a palindrome"<<endl;
			return;
		}
		middle=middle->next;
		first=first->next;
	}
	cout<<"is a palindrome"<<endl;
	return;
}
int main()
{
	int i,j,k;
	node *head=NULL;
	int ch,val;
	while(true)
	{
		cout<<"press 1 to insert\npress 2 to display\npress 3 to check palindrome\npress 4 to exit"<<endl;
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
			ispalindrome(&head);
			break;
			case 4:
			return 0;
		}
	}
	return 0;
}
