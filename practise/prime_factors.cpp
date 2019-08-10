#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int sq=sqrt(n);
	int count[sq+1]={0};
	for(i=2;i<=sq;i++)
	{
		if(n%i==0)
		{
			int sq1=sqrt(i);
			if(i==2)
			{
				count[i]++;
				continue;
			}
			int flag=0;
			for(j=2;j<=sq1;j++)
			{
				if(i%j==0)
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			count[i]++;
		}
	}
	for(i=0;i<=sq;i++)
	{
		if(count[i])
		cout<<i<<" ";
	}
	return 0;
}
