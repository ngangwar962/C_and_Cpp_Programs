#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
	int value;
	node *next;
};
int main()
{
	int i,j,k;
	node *ptr1,*ptr2;
	node *t1,*t2,*t3,*m1,*m2,*m3,*tm;
	t1=new node();
	t2=new node();
	t3=new node();
	m1=new node();
	m2=new node();
	m3=new node();
	tm=new node();
	t1->value=10;
	t2->value=20;
	t3->value=30;
	m1->value=10;
	m2->value=20;
	m3->value=30;
	tm->value=40;
	t1->next=t2;
	t2->next=t3;
	m1->next=m2;
	m2->next=m3;
	m3->next=t3;
	t3->next=tm;
	ptr1=t1;
	ptr2=m1;
	map<node*,int> m;
	while(ptr1!=NULL)
	{
		m[ptr1]=0;
		ptr1=ptr1->next;
	}
	while(ptr2!=NULL)
	{
		if(m.find(ptr2)!=m.end())
		{
			cout<<"Y detected"<<"\n";
			return 0;
		}
		ptr2=ptr2->next;
	}
	cout<<"not detected"<<"\n";
	return 0;
}
