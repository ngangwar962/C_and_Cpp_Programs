#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int size1,size2;
	cin>>size1;
	int a[size1];
	map<int,int> m;
	for(i=0;i<size1;i++)
	{
		cin>>a[i];
		m[a[i]]++;
	}
	cin>>size2;
	int b[size2];
	for(i=0;i<size2;i++)
	{
		cin>>b[i];
		if((m.find(b[i])!=m.end())&&(m[b[i]]!=0))
		{
			cout<<b[i]<<" ";
			m[b[i]]--;
		}
	}
	cout<<"\n";
	return 0;
}
