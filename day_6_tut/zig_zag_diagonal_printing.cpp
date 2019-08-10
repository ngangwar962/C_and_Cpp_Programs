#include<iostream>
using namespace std;
int n=0;
void k_diagonal(int a2[][4],int k)
{
	int i,j;
	int count=0;
	if(k<n)
	{
		for(i=k;i>=0;i--)
		cout<<a2[count++][i]<<" ";
	}
	else
	{
		count=n-1;
		for(i=k-n+1;i<=n-1;i++)
		cout<<a2[i][count--]<<" ";
	}
	return;
}
void reverse_k_diagonal(int a1[][4],int k)
{
	int i,j;
	int count=0;
	if(k<n)
	{
		for(i=k;i>=0;i--)
		cout<<a1[i][count++]<<" ";
	}
	else
	{
		count=n-1;
		for(i=k-n+1;i<=n-1;i++)
		cout<<a1[count--][i]<<" ";
	}
	return;
}
int main()
{
	int i,j,k,l;
	cin>>n;
	int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	for(i=0;i<2*n-1;i++)
	{
		if(i%2==0)
		{
			k_diagonal(a,i);
		}
		else
		{
			reverse_k_diagonal(a,i);
		}
	}
	return 0;
}
