#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k,n,count;
	cin>>n;
	int sq=sqrt(n);
	for(i=2;i<=n;i++)
	{
		count=0;
		while(n%i==0)
		{
			count++;
			n/=i;
		}
		if(count)
		cout<<i<<"^"<<count<<" "; 
	}
}
