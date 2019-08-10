#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k,l;
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	for(i=0;i<n;i++)
	cin>>a[i];
	for(j=0;j<m;j++)
	cin>>b[j];
	int count=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(pow(a[i],b[j])>pow(b[j],a[i]))
			{
				cout<<a[i]<<" "<<b[j]<<"\n";
				count++;
			}
		}
	}
	cout<<count<<"\n";
	return 0;
}
