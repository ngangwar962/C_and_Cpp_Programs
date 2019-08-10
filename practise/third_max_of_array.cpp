#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k;
	int max1,max2,max3;
	int n;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	cin>>arr[i];
	int a=arr[0],b=arr[1],c=arr[2];
	if(a>b)
	{
		if(a>c)
		{
			if(b>c)
			{
				max1=a;
				max2=b;
				max3=c;
			}
			else
			{
				max1=a;
				max2=c;
				max3=b;
			}
		}
		else
		{
			max1=c;
			max2=a;
			max3=b;
		}
	}
	else
	{
		if(b>c)
		{
			if(a>c)
			{
				max1=b;
				max2=a;
				max3=c;
			}
			else
			{
				max1=b;
				max2=c;
				max3=a;
			}
		}
		else
		{
			max1=c;
			max2=b;
			max3=a;
		}
	}
	for(i=3;i<n;i++)
	{
		if(arr[i]>max1)
		{
			max3=max2;
			max2=max1;
			max1=arr[i];
		}
		else if(arr[i]<max1&&arr[i]>max2)
		{
			max3=max2;
			max2=arr[i];
		}
		else if(arr[i]<max1&&arr[i]<max2&&arr[i]>max3)
		{
			max3=arr[i];
		}
	}
	cout<<max1<<" "<<max2<<" "<<max3<<"\n";
	return 0;
}
