#include<iostream>
#define MAX 1000000007
using namespace std;
int main()
{
	long long i,j,k,l,a,b,n;
	cout<<"first and last term and total number of terms"<<"\n";
	cin>>a>>b>>n;
	long long term1=1,term2=1;
	for(i=0;i<n;i++)
	{
		long long temp=(term1*(a%MAX))%MAX;
		if(temp<0)
		term1=temp+MAX;
		else
		term1=temp;
	}
	for(i=0;i<n;i++)
	{
		long long temp=(term2*(b%MAX))%MAX;
		if(temp<0)
		term2=temp+MAX;
		else
		term2=temp;
	}
	long long diff=(term2-term1)%MAX;
	if(diff<0)
	diff=diff+MAX;
	cout<<diff<<"\n";
	return 0;
}
