#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int n,ms;
	cout<<"enter the size of the first array"<<"\n";
	cin>>n;
	int a[n];
	map<int,int> m;
	cout<<"enter the elements of the first array"<<"\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		m[a[i]]++;
	}
	cout<<"enter the size of the second array"<<"\n";
	cin>>ms;
	int b[ms];
	int flag=0;
	cout<<"enter the elements of the second array"<<"\n";
	for(i=0;i<ms;i++)
	{
		cin>>b[i];
		if(m.find(b[i])!=m.end())
		{
			if(m[b[i]]!=0)
			m[b[i]]--;
			else
			flag=1;
		}
		else
		flag=1;
	}
	if(flag==1)
	{
		cout<<"not possible\n";
	}
	else
	{
		cout<<"Yes it is"<<"\n";
	}
	return 0;
}
