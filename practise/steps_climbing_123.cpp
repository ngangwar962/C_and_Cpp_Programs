#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	long int a[n+1];
	a[0]=0;
	a[1]=1;
	a[2]=1;
	for(i=3;i<=n;i++)
	a[i]=a[i-1]+a[i-2]+a[i-3]+1;
	cout<<a[n]<<endl;
	return 0;
}
