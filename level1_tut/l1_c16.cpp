#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,a,n;
	double sum=0,r;
	a=2;
	r=2;
	cout<<"enter the number of terms"<<endl;
	cin>>n;
	sum=a*(double)(pow(r,n)-1)/(r-1);
	cout<<"sum of the "<<n<<" term is "<<sum<<endl;
	return 0;
}
