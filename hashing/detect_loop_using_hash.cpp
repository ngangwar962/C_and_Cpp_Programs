#include<bits/stdc++.h>
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
	node *t1,*t2,*t3,*t4;
	t1=new node();
	t2=new node();
	t3=new node();
	t4=new node();
	t1->data=10;
	t2->data=20;
	t3->data=30;
	t4->data=40;
	t1->next=t2;
	t2->next=t3;
	t3->next=t4;
	t4->next=t2;
	map<node *,int> m;
	node *ptr=t1;
	while(ptr!=NULL)
	{
		cout<<"stuck in loop"<<"\n";
		if(m.find(ptr)!=m.end())
		{
			cout<<"loop detected"<<"\n";
			return 0;
		}
		else
		m[ptr]=0;
		ptr=ptr->next;
	}
	cout<<"not detected"<<"\n";
	return 0;
}
