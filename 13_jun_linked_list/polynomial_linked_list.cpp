#include<iostream>
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
		cout<<ptr->coef<<" x^ "<<ptr->power<<" + ";
		ptr=ptr->next;
	}
	cout<<"NULL"<<endl;
	return;
}
void addition(node **head1,node **head2,node **head3)
{
	node *ptr1=*head1,*ptr2=*head2;
	if(*head1==NULL&&*head2==NULL)
	{
		cout<<"nothing to be added"<<endl;
		return;
	}
	if(*head1==NULL)
	{
		display(&*head2);
		return;
	}
	if(*head2==NULL)
	{
		display(&*head1);
		return;
	}
	else
	{
		
		while(ptr1!=NULL&&ptr2!=NULL)
		{
			if((ptr1->power)==(ptr2->power))
			{
				int coeff=(ptr1->coef)+(ptr2->coef);
				insert(&*head3,coeff,ptr1->power);
				ptr1=ptr1->next;
				ptr2=ptr2->next;
			}
			else if(ptr1->power>ptr2->power)
			{
				insert(&*head3,ptr1->coef,ptr1->power);
				ptr1=ptr1->next;
			}	
			else if(ptr1->power<ptr2->power)
			{
				insert(&*head3,ptr2->coef,ptr2->power);
				ptr2=ptr2->next;
			}
		}
	}
	while(ptr1!=NULL)
	{
		insert(&*head3,ptr1->coef,ptr1->power);
		ptr1=ptr1->next;
	}
	while(ptr2!=NULL)
	{
		insert(&*head3,ptr2->coef,ptr2->power);
		ptr2=ptr2->next;
	}
	return;
}
int main()
{
	int i,j,k;
	int val,t1,t2,p;
	node *head1=NULL,*head2=NULL,*head3=NULL;
	cin>>t1>>t2;
	cout<<"enter the coefficient and power of the term"<<endl;
	while(t1)
	{
		cin>>val>>p;
		insert(&head1,val,p);
		t1--;
	}
	while(t2)
	{
		cin>>val>>p;
		insert(&head2,val,p);
		t2--;
	}
	display(&head1);
	display(&head2);
	addition(&head1,&head2,&head3);
	display(&head3);
	return 0;
	
}
