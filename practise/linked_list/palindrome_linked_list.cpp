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
int total_count(node *head)
{
	if(head==NULL)
	return 0;
	node *temp=head;
	int count=0;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	return count;
}
int position(node *head,int count)
{
	if(count==0)
	{
		return head->data;
	}
	else
	{
		node *ptr=head;
		int c=0;
		cout<<"entered into the function"<<"\n";
		node *prev=NULL;
		while(c!=count)
		{
			c++;
			prev=ptr;
			ptr=ptr->next;
		}
		return ptr->data;
	}	
}

void display(node *head)
{
	node *temp=head;
	if(head==NULL)
	{
		cout<<"nothing to display"<<"\n";
		return;
	}
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<"\n";
	return;
}
int main()
{
	int i,j,k;
	int n;
	node *head=NULL;
	cin>>n;
	for(i=0;i<n;i++)
	{
		int temp;
		cin>>temp;
		insert(head,temp);
	}
	display(head);
	int len=total_count(head);
	int start=0;
	int end=len-1;
	int flag=0;
	while(start<end)
	{
		cout<<start<<" "<<end<<"\n";
		int head_start=position(head,start);
		int head_end=position(head,end);
		cout<<head_start<<" "<<head_end<<"\n";
		if(head_start!=head_end)
		{
			flag=1;
			cout<<"not a palindrome"<<"\n";
			return 0;
		}
		start++;
		end--;
	}
	cout<<"is a palindrome"<<"\n";
	return 0;
}
