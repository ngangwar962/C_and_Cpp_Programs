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
void detect_loop(node **head)
{
	node *p1=*head,*p2=*head;
	while(p2!=NULL&&p2->next!=NULL)
	{
		p1=p1->next;
		p2=p2->next->next;
		if(p1==p2)
		{
			cout<<"cycle detected"<<endl;
			return;
		}	
	}
	cout<<"no cycle detected"<<endl;
	return;
}
int main()
{
	int i,j,k;
	int ch,val;
	node *head=NULL;
	insert(&head,10);
	insert(&head,20);
	insert(&head,30);
	insert(&head,40);
	node *ptr=head;
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
	}
	ptr->next=head;
	detect_loop(&head);
	return 0;
}
