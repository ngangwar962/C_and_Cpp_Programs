#include<iostream>
using namespace std;
class node
{
public:
int data,flag;
node *next;
};
void detect_y_n2(node **head1,node **head2)
{
	node *ptr1=*head1;
	while(ptr1!=NULL)
	{
		node *ptr2=*head2;	
		while(ptr2!=NULL)
		{
			if(ptr1==ptr2)
			{
				cout<<"Y detected"<<endl;
				return;
			}
			ptr2=ptr2->next;
		}
		ptr1=ptr1->next;
	} 
	cout<<"Y not detected"<<endl;
	return;
}
void detect_y_n(node **head1,node **head2)
{
	node *ptr1=*head1,*ptr2=*head2;
	if(*head1==NULL)
	{
		cout<<"empty liked list 1 so no y"<<endl;
		return;
	}
	if(*head2==NULL)
	{
		cout<<"empty linked list 2 so no y"<<endl;
		return;
	}
	while(ptr1!=NULL)
	{
		ptr1->flag=1;
		cout<<ptr1->data<<" ";
		ptr1=ptr1->next;
	}
	cout<<endl;
	while(ptr2!=NULL)
	{
		cout<<ptr2->data<<" ";
		if(ptr2->flag==1)
		{
			cout<<"y detected"<<endl;
			return;
		}
		ptr2=ptr2->next;
	}
	cout<<"no y detected"<<endl;
	return;
}
int main()
{
	int i,j,k;
	node *t1=new node();
	node *t2=new node();
	node *t3=new node();
	node *t4=new node();
	node *m1=new node();
	node *m2=new node();
	node *head1=t1,*head2=m1;
	cout<<"enter node value"<<endl;
	cin>>t1->data;
	cout<<"enter node value"<<endl;
	cin>>t2->data;
	cout<<"enter node value"<<endl;
	cin>>t3->data;
	cout<<"enter node value"<<endl;
	cin>>t4->data;
	t1->next=t2;
	t2->next=t3;
	t3->next=t4;
	t4->next=NULL;
	cout<<"enter node value"<<endl;
	cin>>m1->data;
	cout<<"enter node value"<<endl;
	cin>>m2->data;
	m1->next=m2;
	m2->next=t3;
	t1->flag=0;
	t2->flag=0;
	t3->flag=0;
	t4->flag=0;
	m1->flag=0;
	m2->flag=0;		
	detect_y_n(&head1,&head2);//O(m) time complexity,(m>n)
	detect_y_n2(&head1,&head2);//O(n2)time complexity
	return 0;
}
