#include<iostream>
#include<math.h>
using namespace std;
class node
{
	public:
	int coef,power;
	node *next;
};
void insert(node **head,int val,int p)
{
	node *temp=new node();
	temp->coef=val;
	temp->power=p;
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
	return ;
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
		cout<<ptr->coef<<" x^ "<<ptr->power<<" + ";
		ptr=ptr->next;
	}
	cout<<"NULL"<<endl;
	return;
}
int calculate(node **head,int x)
{
	if(*head==NULL)
	{
		return 0;
	}
	node *ptr=*head;
	int sum=0;
	while(ptr!=NULL)
	{
		sum+=(ptr->coef)*pow(x,ptr->power);
		ptr=ptr->next;
	}
	return sum;
}
int main()
{
	node *head=NULL;
	int n,val,p,x;
	cin>>n;
	while(n)
	{
		cin>>val>>p;
		insert(&head,val,p);
		n--;
	}
	display(&head);
	cout<<"enter the value of x"<<endl;
	cin>>x;
	cout<<calculate(&head,x)<<endl;
	return 0;
}
