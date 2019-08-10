#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,n;
	cin>>n;
	int a[n];
	int max=-1;
	for(i=0;i<n;i++)
	{	
		cin>>a[i];
		if(a[i]>max)
		max=a[i];
	}
	cout<<"enter the frequency count"<<endl;
	cin>>k;
	int count[max+1]={0};
	for(i=0;i<n;i++)
	{
		count[a[i]]++;
	}
	for(i=0;i<=max;i++)
	{
		if((count[i])&&(count[i]==k))
		{
			cout<<i<<" "<<endl;
		}
	}
	return 0;
}
