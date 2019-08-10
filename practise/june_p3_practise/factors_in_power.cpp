#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k;
	int n,sq;
	cin>>n;
	sq=sqrt(n);
	int count=0;
	for(i=2;i<=n;i++)
	{
		count=0;
		while(n%i==0)
		{
			count++;
			n/=i;
		}
		cout<<i<<"^"<<count<<" * ";
	}
	cout<<"end"<<endl;
	return 0;
}
