#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int size1;
	cin>>size1;
	int a[size1];
	int r1,r2;
	map<int,int> m;
	cout<<"enter the range of element"<<"\n";
	cin>>r1>>r2;
	cout<<"press -1 to stop inputing the input"<<"\n";
	while(1)
	{
		int temp;
		cin>>temp;
		if(temp==-1)
		break;
		else
		m[temp]++;
	}
	for(i=r1;i<=r2;i++)
	{
		if(m.find(i)==m.end())
		{
			cout<<i<<" ";
		}
	}
	cout<<"\n";
	return 0;
}
