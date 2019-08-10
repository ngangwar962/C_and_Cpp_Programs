#include<iostream>
#include<math.h>
using namespace std;
int euclids(int m,int n)
{
	if(n==0)
	return 0;
	if(n==1)
	return 1;
	m=m%n;
	return euclids(n,m);
}
int main()
{
int i,j,k,n1,n2;
cin>>n1>>n2;
int ret=euclids(n1,n2);
if(ret==1)
cout<<"coprime numbers"<<endl;
else
cout<<"non-coprime numbers "<<endl;
return 0;
} 
