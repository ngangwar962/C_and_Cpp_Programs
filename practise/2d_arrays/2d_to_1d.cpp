#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l;
	int n;
	cin>>n;
	int a[n][n];
	int array_1d[n*n];
	int count=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
			array_1d[count]=a[i][j];
			count++;
		}
	}
	for(i=0;i<count;i++)
	cout<<array_1d[i]<<" ";
	cout<<"\n";
	return 0;
}
