#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
float prev=0,n;
void square_root(float a,float b)
{
	float mid=(a+b)/2.0;
	//cout<<prev<<" "<<mid<<endl;
	float square=mid*mid;
	if(fabs(prev-mid)<=0.0001)
	{
		cout<<"smallest is "<<mid<<endl;
		
		return;
	}
	prev=mid;
	if(square>n)
	{
		square_root(a,mid);
	}
	else if(square<n)
	{
		square_root(mid,b);
	}
}
int main()
{
	int i,j,k;
	cin>>n;
	float a=0,b=n;
	square_root(a,b);
	return 0;
}
