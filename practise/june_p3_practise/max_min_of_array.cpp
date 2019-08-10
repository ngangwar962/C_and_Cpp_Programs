#include<iostream>
#define MAX 10000
using namespace std;
int main()
{
	int i,j,k;
	int min=MAX,max=-1;
	int n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	if(a[0]>a[1])
	{
		max=a[0];
		min=a[1];
	}
	else
	{
		max=a[1];
		min=a[2];
	}
	int arr_max=-100;
	int arr_min=1000;
	for(i=2;i<n;i+=2)
	{
		if(a[i]>a[i+1])
		{
			arr_max=a[i];
			arr_min=a[i+1];
		}
		else
		{
			arr_max=a[i+1];
			arr_min=a[i];
		}
		if(arr_max>max)
		max=arr_max;
		if(arr_min<min)
		min=arr_min;
	}
	cout<<"minimum is "<<min<<endl;
	cout<<"maximum is "<<max<<endl;
	return 0;
}
