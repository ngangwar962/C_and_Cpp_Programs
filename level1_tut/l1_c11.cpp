#include<iostream>
using namespace std;
int main()
{
	int i,j=3,k,n;
	long double sum=1,x,den=1,num;
	cout<<"enter x and n"<<endl;
	cin>>x>>n;
	num=x;
	i=1;
	sum=x;
	while(j<=n)
	{
		if(i%2)
		{
			num=(-1)*num*x*x;
			den=den*(j)*(j-1);
			cout<<num<<" "<<den<<" "<<j<<endl;		
		}
		else
		{
			num=num*x*x;
			den=den*(j)*(j-1);
			cout<<num<<" "<<den<<" "<<j<<endl;
		}
		sum=sum+(float)num/den;
		cout<<"sum"<<sum<<endl;
		i++;
		j+=2;
	}
	return 0;
}
