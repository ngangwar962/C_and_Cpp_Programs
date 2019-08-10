#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int> s1,s2;
	int i,j,k,n,val;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>val;
		s1.push(val);
	}
	int count=0;
	for(j=0;j<n;j++)
	{
		if(s1.top()%2==0)
		{
			s1.pop();
		}
		else
		{
			s2.push(s1.top());
			s1.pop();
			count++;
		}
	}
	cout<<"all odd elements are "<<endl;
	for(j=0;j<count;j++)
	{
		cout<<s2.top()<<" ";
		s2.pop();
	}
	cout<<endl;
	return 0;
}
