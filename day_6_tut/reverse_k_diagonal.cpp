#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	//cin>>n;
	n=4;
	int a[n][n]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	/*for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}*/
	cout<<"enter the value of k"<<endl;
	cin>>k;
	int count=0;
	if(k<n)
	{
		for(i=k;i>=0;i--)
		cout<<a[count++][i]<<" ";
	}
	else
	{
		count=n-1;
		for(i=k-n+1;i<=n-1;i++)
		cout<<a[i][count--]<<" ";
	}
	return 0;
}
