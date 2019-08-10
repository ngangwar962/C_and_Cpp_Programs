#include<iostream>
#include<math.h>
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
int count_node(node **head)
{
	int count=0;
	node *ptr=*head;
	if(*head==NULL)
	return 0;
	if(ptr->next==NULL)
	return 1;
	while(ptr!=NULL)
	{
		count++;
		ptr=ptr->next;
	}
	return count;
}
void split(node *headptr,node **first,node **second)
{
	node *h=headptr;
	if((h==NULL)||(h->next==NULL))
	{
		return;
	}
	int count=count_node(&headptr);
	node *ptr=headptr;
	int temp=0;
	*first=headptr;
	node *prev=NULL;
	if(count%2)
	{
		while(temp<ceil(count/2))
		{
			prev=ptr;
			ptr=ptr->next;
			temp++;
		}
		*second=ptr;
		prev->next=NULL;
	}
	else
	{	
		while(temp<count/2)
		{
			ptr=ptr->next;
			temp++;
		}
		*second=ptr->next;
		ptr->next=NULL;
	}
	/*display(&*first);
	display(&*second);*/
	return;
}
node * merge(node *first,node *second)
{
	node *temp=first;
	node *temp1=first,*temp2=second;
	while(temp1!=NULL&&temp2!=NULL)
	{
		if(temp1->data>temp2->data)
		{
			insert(&temp,temp2->data);
			temp2=temp2->next;
		}
		else
		{
			insert(&temp,temp1->data);
			temp1=temp1->next;
		}
	}
	while(temp1!=NULL)
	{
		temp->next=temp1;
		temp1=temp1->next;
	}
	while(temp2!=NULL)
	{
		temp->next=temp2;
		temp2=temp2->next;
	}
	return temp;
}
void msort(node **headptr)
{
	node *h=*headptr;
	node *first,*second;
	if((h==NULL)||(h->next==NULL))
	{
		return;
	}
	first=*headptr;
	second=NULL;
	split(h,&first,&second);
	msort(&first);
	display(&first);
	msort(&second);
	display(&second);
	node *hptr=merge(first,second);
	display(&hptr);
	return;
}
int main()
{	
	int i,j,k;
	node *head=NULL;
	int n;
	cout<<"enter the no of elements"<<endl;
	cin>>n;
	cout<<"enter the elements of the linked list"<<endl;
	while(n)
	{
		int val;
		cin>>val;
		insert(&head,val);
		n--;
	}
	cout<<"value inserted"<<endl;
	display(&head);
	cout<<"display done"<<endl;
	msort(&head);
	return 0;
}
