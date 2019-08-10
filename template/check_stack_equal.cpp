#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<int> s1,s2,s3;
	int n,i,j;
	cin>>n;
	int val,flag;
	cout<<"enter the elements of the first stack"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>val;
		s1.push(val);
	}	
	cout<<"enter the elements of the second stack"<<endl;
	for(j=0;j<n;j++)
	{
		cin>>val;
		s2.push(val);
	}
	int temp1;
	while(!s1.empty())
	{
		temp1=s1.top();
		s1.pop();
		int temp2;
		flag=0;
		while(!s2.empty())
		{
			temp2=s2.top();
			s2.pop();
			if(temp1==temp2&&flag==0)
			{
				flag=1;
				continue;
			}
			else if((temp1==temp2)&&(flag==1))
			{
				s3.push(temp2);
			}
			else
			{
				s3.push(temp2);
			}	
		}
		if(flag==0)
		{
			cout<<"not equal"<<endl;
			return 0;
		}
		while(!s3.empty())
		{
			int tempo=s3.top();
			s3.pop();
			s2.push(tempo);
		}
	}
	cout<<"equal"<<endl;
	return 0;
}
