#include<iostream>
using namespace std;
int main()
{
	int i,t,j,k;
	cin>>t;
	while(t)
	{
		int n;
		cin>>n;
		long int a[n];
		for(i=0;i<n;i++)
		cin>>a[i];
		int count2=0,count1=0;
		for(i=n-1;i>=0;i--)
		{
			if(a[i]%2)
			{
				count1++;
			}
			else
			{
				count2+=count1;
			}
		}
		t--;
		cout<<count2<<endl;
	}
	
}
