#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	int sq=sqrt(n);
	for(i=2;i<sq;i++)
	{
		if(n%i==0)
		{
			cout<<i;
			return 0;
		}
	}
	cout<<"not found"<<"\n";
	return 0;
}
