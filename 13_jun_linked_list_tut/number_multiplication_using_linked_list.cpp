#include<iostream>
#include<math.h>
using namespace std;
class node 
{
	public:
	int data;
	node *next;
};
node *tempo1=NULL;
void display(node *head)
{
	if(head==NULL)
	{
		cout<<"nothing to display"<<endl;
		return;
	}
	node *ptr=head;
	while(ptr!=NULL)
	{
		cout<<ptr->data<<"->";
		ptr=ptr->next;
	}
	cout<<"NULL"<<endl;
	return;
}
void reverse(node **head)
{
	node *prev=NULL,*cur=*head,*right;
	while(cur!=NULL)
	{
		right=cur->next;
		cur->next=prev;
		prev=cur;
		cur=right;
	}
	*head=prev;
	return;
}
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
node* calculation(node *head1,int val)
{
	//cout<<val<<endl;
	node *ptr=head1;
	//node *head2=NULL;
	int carry=0;
	node *tempo=NULL;
	while(ptr!=NULL)
	{
		int temp=(val*(ptr->data))+carry;
		insert(&tempo,temp%10);
		carry=temp/10;
		ptr=ptr->next;	
	}
	while(carry)
	{
		insert(&tempo,carry%10);
		carry/=10;	
	}
	return tempo;
}
void multiplication(node **head1,node **head2)
{
	int count=0;
	node *ptr=*head2;
	node *tempo2;
	node *addition_result=NULL;
	node *tempo=calculation(*head1,ptr->data*pow(10,count));
	ptr=ptr->next;
	//display(tempo);
	count=1;
	if(ptr==NULL)
	{
		reverse(&tempo);
		display(tempo);
		return;
	}
	while(ptr!=NULL)
	{
		tempo1=calculation(*head1,ptr->data*pow(10,count));
		//display(tempo1);
		//cout<<ptr->data*pow(10,count)<<endl;
		addition_result=NULL;
		int carry=0;
		while(tempo!=NULL||tempo1!=NULL)
		{
			//cout<<"going inside"<<endl;
			int sumy=carry+((tempo!=NULL)?(tempo->data):0)+((tempo1!=NULL)?tempo1->data:0);
			node *temp=new node();
			temp->data=sumy%10;
			carry=sumy/10;
			temp->next=NULL;
			if(addition_result==NULL)
			{
				//cout<<"YES"<<endl;
				addition_result=temp;
				if(tempo->next!=NULL)
				tempo=tempo->next;
				if(tempo1->next!=NULL)
				tempo1=tempo1->next;
				continue;
			}
			//cout<<"till here ok"<<endl;
			node *tmp=addition_result;
			while(tmp->next!=NULL)
			{
				tmp=tmp->next;
			}
			tmp->next=temp;
			if(tempo!=NULL)
			tempo=tempo->next;
			if(tempo1!=NULL)
			tempo1=tempo1->next;
		}
		tempo=NULL;
		tempo=addition_result;
		reverse(&tempo);
		display(tempo);
		count++;
		ptr=ptr->next;
	}
	return;
}
int main()
{
	int i,j,k;
	node *head1=NULL,*head2=NULL;
	int num1,num2;
	cout<<"enter the number to be multiplied one by one"<<endl;
	int count1=0,count2=0;
	cout<<"enter -1 to break"<<endl;
	while(1)
	{
		cin>>num1;
		if(num1==-1)
		break;
		//int rem=num1%10;
		insert(&head1,num1);
		count1++;	
	}
	if(head1==NULL)
	insert(&head1,0);
	reverse(&head1);
	cout<<"enter the digits of the number 2 \n enter -1 to exit"<<endl;
	while(1)
	{
		cin>>num2;
		if(num2==-1)
		break;
		insert(&head2,num2);
		count2++;
	}
	if(head2==NULL)
	insert(&head2,0);
	reverse(&head2);
	if(count1>count2)
	multiplication(&head1,&head2);
	else
	{
		multiplication(&head2,&head1);
	}
	return 0;
	
}
