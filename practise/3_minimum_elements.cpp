#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	return;
}
int main()
{
	int i,j,n;
	cin>>n;
	int arr[n];
	int k;
	k=n;
	int temp[k];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
		//temp[i]=arr[i];
	}
	for(i=0;i<k;i++)
	{
		int index;
		int min=10000;
		for(j=i+1;j<k;j++)
		{
			if(arr[j]<min)
			{
				index=j;
				min=arr[j];
			}
		}
		swap(arr[i],arr[index]);
	}
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
	return 0;
}
