#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	double sum=1,num=1,den=1;
	double x,n;
	cin>>x>>n;
	for(i=1;i<=n;i++)
	{
	double fact=1;
		for(j=1;j<=i;j++)
		{
			fact=fact*j;
		}	
	num=num*x;
	sum+=(double)num/fact;
	cout<<sum<<"fact="<<fact<<endl;
	}	

	return 0;
}
