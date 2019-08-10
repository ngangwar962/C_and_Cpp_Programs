#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *next;
};
int main()
{
	int i,j,k;
	node *head=NULL;
	node *temp1=new node();
	node *temp2=new node();
	node *temp3=new node();
	int val;
	cout<<"enter the value"<<endl;
	cin>>val;
	temp1->data=val;
	head=temp1;
	cout<<"enter the value of the second node"<<endl;
	cin>>val;
	temp2->data=val;
	temp2->next=NULL;
	temp1->next=temp2;
	cout<<"enter the value of the third node"<<endl;
	cin>>val;
	temp3->data=val;
	temp3->next=NULL;
	temp2->next=temp3;
	node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
	return 0;
}
