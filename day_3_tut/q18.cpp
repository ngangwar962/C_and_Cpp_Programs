#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int fin=n;
	int count=0;
	int a[1000];
	while(n)
	{
		if(n%2)
		{
			a[count]=1;
		}
		else
		{
			a[count]=0;
		}
		n/=2;
		count++;
	}
	for(i=count-1;i>=0;i--)
	cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
