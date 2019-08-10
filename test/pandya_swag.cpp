#include<iostream>
#include<cstdlib>
#define MAX 1000000
using namespace std;
long int calculation(int room)
{
	long int sum=0;
	int even=0;
	int odd=0;
	if(room/10==0)
	{
		return room;
	}
	else
	{
		while(room)
		{
			int a=room%10;
			room=room/10;
			if(a%2==0)
			even+=a;
			else
			odd+=a;
		}
		sum=abs(even-odd);
	}
	return sum;
}
int main()
{
	int i,j,k,n=5;
	int count=n;
	int a[n];
	int room;
	long int sum=0;
	long int temp=1;
	int total[5]={0};
	for(i=1;i<=n;i++)
	{
		long int watches=calculation(count+i);
		sum+=watches;
	        a[temp++]=watches;
	}
	for(i=1;i<=n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	sum=sum*2-a[temp-1];
	cout<<sum<<endl;
	count=n;
	total[count]=sum;
	for(i=n-1;i>=1;i--)
	{
		total[i]=total[i+1]-(calculation(i+i+2)+2*calculation(i+i+1)+calculation(i+i))+2*calculation(i+1);
	}
	int result[n]={0};
	result[1]=total[1];
	for(i=2;i<=n;i++)
	{
		result[i]=result[i-1]+total[i];
	}
	for(i=1;i<=n;i++)
	cout<<result[i]<<" ";
	cout<<endl;
	int t;
	cout<<"enter the total test cases"<<endl;
	cin>>t;
	while(t)
	{
		cin>>n;
		cout<<result[n]<<endl;
		t--;
	}
	return 0;
	return 0;	
}
