#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	int max=0;
	for(i=n-1;i>=0;i--)
	{
		if(a[i]>max)
		{
			cout<<a[i]<<" ";
			max=a[i];
		}
	}
	cout<<endl;
	return 0;
}
