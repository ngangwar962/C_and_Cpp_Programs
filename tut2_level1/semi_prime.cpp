#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k,n,m,a[1000]={0};
	int count;
	cin>>n;
	m=n;
	count=0;
	int counter=0;
	for(i=2;i<=n;i++)
	{
		
		while(n%i==0)
		{
			counter++;
			int sq=sqrt(i);
			for(j=2;j<=sq;j++)
			{
				
				if(i%j==0)
				{
					cout<<"not semi-prime"<<endl;
					return 0;
				}
				if(counter>2)
				{
					cout<<"not a semi prime"<<endl;
					return 0;
				}
			}
			n/=i;
		}
	}
	if(counter==2)
	cout<<"semi prime"<<endl;
	else
	cout<<"not a semi prime"<<endl;
	return 0;
}
