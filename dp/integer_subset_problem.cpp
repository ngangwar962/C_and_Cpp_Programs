#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int arr[]={0,4,7,15,25,42};
	int sum;
	int size=sizeof(arr)/sizeof(int);
	cout<<"enter the value of the sum"<<"\n";
	cin>>sum;
	bool sub[size+1][sum+1];
	for(i=0;i<=size;i++)
	{
		sub[i][0]=1;
	}
	for(j=1;j<=sum;j++)
	{
		sub[0][j]=0;
	}
	for(i=1;i<=size;i++)
	{
		for(j=1;j<=sum;j++)
		{
			if(arr[i]>j)
			{
				sub[i][j]=sub[i-1][j];
			}
			if(j>=arr[i])
			{
				sub[i][j]=sub[i-1][j]||sub[i-1][j-arr[i]];
			}
		}
	}
	cout<<"computed"<<"\n";
	for(i=0;i<=size;i++)
	{
		for(j=0;j<=sum;j++)
		{
			cout<<sub[i][j]<<" ";
		}
		cout<<"\n";
	}
	if(sub[size][sum])
	{
		cout<<"subset found"<<"\n";
	}
	else
	{
		cout<<"not found"<<"\n";
	}
	return 0;
}
