#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,m;
	cin>>n>>m;
	int o=0,e=0;
	int a[n][m];
	int odd[n*m],even[n*m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
			if(a[i][j]%2)
			{
				odd[o++]=a[i][j];
			}
			else
			{
				even[e++]=a[i][j];
			}
		}
	}
	for(i=0;i<o;i++)
	cout<<odd[i]<<" ";
	cout<<endl;
	for(j=0;j<e;j++)
	cout<<even[j]<<" ";
	cout<<endl;
	return 0;
}
