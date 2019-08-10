#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	int i,j,k;
	int n;
	/*cin>>n;
	int fib[n+1];
	fib[0]=0;
	fib[1]=1;
	for(i=2;i<=n;i++)
	fib[i]=fib[i-1]+fib[i-2];*/
	//cout<<fib[n]<<"\n";
	cout<<"we will check any number comes in the fibonacci series"<<"\n";
	int t;
	cin>>t;
	while(t)
	{
		cin>>n;
		int sq1=sqrt(5*n*n-4);
		int sq2=sqrt(5*n*n+4);
		if(sq1*sq1==5*n*n-4)
		{
			cout<<"YES";
		}
		else if(sq2*sq2==5*n*n+4)
		{
			cout<<"YES";
		}
		else
		{
			cout<<"NO"<<"\n";
		}
		t--;
	}
	return 0;
}
