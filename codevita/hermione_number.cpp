#include<bits/stdc++.h>
using namespace std;
long int addition(long int num,long int times)
{
	long int sum=0,i,temp=num;
	for(i=0;i<times;i++)
	{
		temp=(sum+num)%1000000007;
		if(temp<0)
		temp+=1000000007;
		sum=temp;
	}
	return temp;
}
long int fact(long int num)
{
	long int i;
	long int temp=1;
	for(i=2;i<=num;i++)
	{
		long int tempo=addition(temp,i)%1000000007;
		if(temp<0)
		tempo+=1000000007;
		temp=(tempo)%1000000007;
	}
	cout<<"factorial of "<<temp<<"\n";
	return temp;
}
long int power(long int num,int times)
{
	if(times==0)
	return 1;
	long int left=power(num,times/2)%1000000007;
	if(left<0)
	left+=1000000007;
	if(times%2==0)
	{
		return (left*left)%1000000007;
	}
	else
	{
		return (left*left*num)%1000000007;
	}
}
int main()
{
	int i,j,k,l,r;
	long int n;
	cout<<"enter the size"<<"\n";
	cin>>n;
	long int a[n];
	cout<<"enter the elements of the array"<<"\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the left and right most index of the array"<<"\n";
	cin>>l>>r;
	long int prod=0;
	for(i=l;i<=r;i++)
	{
		long int temp=addition((fact(a[i])%1000000007),prod)%1000000007;
		if(temp<0)
		{
			temp=temp+1000000007;
		}
		prod=temp;
	}
	long int result=power(prod,r-l)%1000000007;
	if(result<0)
	result=result+1000000007;
	cout<<"product is "<<result<<"\n";
	return 0;
}
