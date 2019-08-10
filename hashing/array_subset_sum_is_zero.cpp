#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	map<int,int> m;
	int size;
	cin>>size;
	int a[size];
	long int sum=0;
	for(i=0;i<size;i++)
	{
		cin>>a[i];
		sum+=a[i];
		if(m.find(sum)==m.end())
		m[sum]=i;
		else
		{	
			cout<<m[sum]+1<<" "<<i<<"\n";
			cout<<"found"<<"\n";
			return 0;
		}
	}
	cout<<"not found"<<"\n";
	return 0;
}
