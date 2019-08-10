#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	cout<<"enter the size of the array"<<"\n";
	cin>>k;
	int sum;
	int s[k+1];
	cout<<"enter the element of the array"<<"\n";
	s[0]=0;
	for(i=1;i<=k;i++)
	cin>>s[i];
	sort(s,s+k+1);
	for(i=0;i<=k;i++)
	cout<<s[i]<<" ";
	cout<<"\n";
	cout<<"enter the sum"<<"\n";
	cin>>sum;
	int a[sum+1][k+1]={0};
	for(i=0;i<=sum;i++)
	{
		a[i][0]=0;
	}
	for(j=0;j<=k;j++)
	a[0][j]=1;
	a[0][0]=1;
	for(i=1;i<=sum;i++)
	{
		for(j=1;j<=k;j++)
		{
			long int temp=0;
			if(i>=s[j])
			{
				temp=a[i-s[j]][j-1];	
			}
			a[i][j]=temp+a[i][j-1];
		}
	}
	cout<<a[sum][k]<<"\n";
	return 0;
}
