#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int catalon[n+1]={0};
	catalon[0]=1;
	catalon[1]=1;
	catalon[2]=2;
	for(i=3;i<=n;i++)
	{
		for(j=0;j<i;j++)
		{
			catalon[i]=catalon[i]+catalon[j]*catalon[i-j-1];
		}
	}
	cout<<catalon[n]<<"\n";
	return 0;
}
