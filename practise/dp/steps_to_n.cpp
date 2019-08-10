#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l;
	int n;
	cin>>n;
	int step[n+1];
	step[0]=0;
	for(i=1;i<=n;i++)
	{
		if(i%2)
		{
			step[i]=step[i-1]+1;
		}
		else
		{
			step[i]=step[i/2]+1;
		}
	}
	cout<<step[n]<<"\n";
	return 0;
}
