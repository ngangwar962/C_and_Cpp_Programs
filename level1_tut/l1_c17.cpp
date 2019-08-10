#include<iostream>
using namespace std;
int main()
{
int i,j,k,l,a,b,c,n;
double sum=0;
cout<<"enter the three terms of the AP"<<endl;
cin>>a>>b>>c;
int d1=b-a;
int d2=c-b;
if(d1!=d2)
{
	cout<<"not in ap"<<endl;
	return 0;
}
cout<<"enter the number of terms"<<endl;
cin>>n;
cout<<a<<" "<<b<<" "<<c<<" ";
sum=a+b+c;
for(i=4;i<=n;i++)
{
	int temp=a+(i-1)*d1;
	cout<<temp<<" ";
	sum=sum+temp;
}
cout<<endl;
cout<<"sum="<<sum<<endl;
return 0;
}
