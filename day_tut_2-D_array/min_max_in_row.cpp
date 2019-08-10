#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k,l,n,m;
	cin>>n>>m;
	int a[n][m];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	int min=1000,max=-1;
	int min_index=0;
	int max_index=0;
	for(i=0;i<n;i++)
	{
		int count=0;
		int sum=0;
		for(j=m-1;j>=0;j--,count++)
		{
			if(a[i][j])
			sum+=pow(2,count);
		}
		cout<<sum<<endl;
		if(sum>max)
		{
			max=sum;
			max_index=i;
		}
		if(sum<min)
		{
			min=sum;
			min_index=i;
		}
	}
	cout<<min_index<<endl;
	cout<<max_index<<endl;
	return 0;
}
