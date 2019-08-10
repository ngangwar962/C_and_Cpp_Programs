#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cout<<"enter the size of the array"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter the value of k"<<endl;
	cin>>k;
	for(i=0;i<n;i++)
	cin>>a[i];
	int number_of_times=n/k;
	if(number_of_times==0)
	{
		int start=0;
		int end=n-1;
		while(start<end)
		{
			int temp=a[start];
			a[start]=a[end];
			a[end]=temp;
			start++;
			end--;
		}
		for(i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
		return 0;
	}
	for(i=1;i<=number_of_times;i++)
	{
		int start=k*(i-1);
		int end=i*k-1;
		while(start<end)
		{
			int temp;
			temp=a[start];	
			a[start]=a[end];
			a[end]=temp;
			start++;
			end--;
		}
	}
	int rem=n%k;
	int start=number_of_times*k;
	int end=start+rem-1;
	while(start<end)
	{
		int temp;
		temp=a[start];
		a[start]=a[end];
		a[end]=temp;
		start++;
		end--;
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}
