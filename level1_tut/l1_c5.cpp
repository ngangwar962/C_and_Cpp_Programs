#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,sum=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum+=i;
		int temp=sum;
		for(j=1;j<=i;j++,temp--)
		{
			cout<<temp;
		}
		cout<<endl;
	}
	return 0;
}
