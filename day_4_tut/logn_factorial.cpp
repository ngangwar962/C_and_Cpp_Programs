#include<iostream>
#include<math.h>
using namespace std;
double sumlog(int n)
{
	
	if(n==0)
	return 0;
	return sumlog(n-1)+log(n);
}
int main()
{
	int n;
	cin>>n;
	cout<<sumlog(n)<<endl;
	return 0;
}
