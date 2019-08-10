#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int max=0;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	cout<<max<<endl;
	return 0;
}
