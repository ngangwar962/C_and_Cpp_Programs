#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k;
	int sq,n;
	cin>>n;
	sq=sqrt(n);
	int flag=0;
	for(i=2;i<=sq;i++)
	{
		if(n%i==0)
		{
			if(i==2)
			cout<<i<<" ";
			else
			{
				flag=0;
				int sq1=sqrt(i);
				for(j=2;j<=sq1;j++)
				{
					if(i%j==0)
					{
						flag=1;
						break;
					}
				}
				if(flag==0)
				cout<<i<<" ";
			}
		}
	}
	cout<<endl;
	return 0;
}
