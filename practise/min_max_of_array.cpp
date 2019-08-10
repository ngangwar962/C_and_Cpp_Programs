#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l;
	int n;
	cin>>n;
	if(n%2)
	{
		cout<<"please enter even number of terms"<<"\n";
		return 0;
	}
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	int max=0,min=0;
	if(arr[0]>arr[1])
	{
		max=arr[0];
		min=arr[1];
	}
	else
	{
		max=arr[1];
		min=arr[0];
	}
	for(i=2;i<n;i+=2)
	{
		int local_max=(arr[i]>arr[i+1]?arr[i]:arr[i+1]);
		int local_min=(arr[i]<arr[i+1]?arr[i]:arr[i+1]);
		if(local_max>max)
		{
			max=local_max;
		}
		if(local_min<min)
		{	
			min=local_min;
		}
	}
	cout<<max<<" "<<min<<"\n";
	return 0;
}
