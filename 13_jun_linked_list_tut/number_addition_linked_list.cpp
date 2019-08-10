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
	while(*head==NULL)
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
void calculation(node **head1,node **head2,node **head3)
{
	int carry=0;
	int sum=0;
	node *ptr1=*head1;
	node *ptr2=*head2;
	while(ptr1!=NULL||ptr2!=NULL)
	{
		sum=carry+((ptr1!=NULL)?(ptr1->data):0)+((ptr2!=NULL)?(ptr2->data):0);
		int result=sum%10;
		carry=sum/10;
		node *temp=new node();
		temp->data=result;
		temp->next=NULL;
		node *ptr=*head3;
		if(*head3==NULL)
		{
			*head3=temp;
		}
		else
		{
			while(ptr->next!=NULL)
			{
				ptr=ptr->next;
			}
			ptr->next=temp;
		}
		if(ptr1!=NULL)
		ptr1=ptr1->next;
		if(ptr2!=NULL)
		ptr2=ptr2->next;
	}
	return;
}
void display(node **head)
{
	if(*head==NULL)
	return;
	node *temp=*head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
	return;
}
int main()
{
	node *head1=NULL,*head2=NULL,*head3=NULL;
	int i,j,k,l;
	int n1,n2;
	cin>>n1>>n2;
	int count1=0,count2=0;
	while(n1)
	{
		int a=n1%10;
		insert(&head1,a);
		n1/=10;
		count1++;
	}
	while(n2)
	{
		int a=n2%10;
		insert(&head2,a);
		n2/=10;
		count2++;
	}
	display(&head1);
	display(&head2);
	calculation(&head1,&head2,&head3);
	display(&head3);
	return 0;	
}
