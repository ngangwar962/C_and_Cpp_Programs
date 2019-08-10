#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int sq=sqrt(n);
	for(i=1;i<=sq;i++)
	{
		if(n%i==0)
		cout<<"("<<i<<","<<n/i<<")"<<" ";
	}
	cout<<endl;
	return 0;
}
