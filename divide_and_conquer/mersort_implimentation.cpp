#include<iostream>
using namespace std;
void merge(int arr[],int left,int middle,int right)
{
	int i,j,k;
	int n1=middle-left+1;
	int n2=right-middle;
	int left_arr[n1];
	int right_arr[n2];
	for(i=0;i<n1;i++)
	{
		left_arr[i]=arr[left+i];
	}
	for(i=0;i<n2;i++)
	{
		right_arr[i]=arr[middle+i+1];
	}
	i=0;j=0;k=0;
	while(i<n1&&j<n2)
	{
		if(left_arr[i]<right_arr[j])
		{
			arr[left+k]=left_arr[i];
			k++;
			i++;
		}
		else
		{
			arr[left+k]=right_arr[j];
			k++;
			j++;
		}
	}
	while(i<n1)
	{
		arr[left+k]=left_arr[i];
		k++;
		i++;
	}
	while(j<n2)
	{
		arr[left+k]=right_arr[j];
		k++;
		j++;
	}
	return;
}
void merge_sort(int arr[],int left,int right)
{
	int middle=(left+(right-1))/2;
	if(left<right)
	{
		merge_sort(arr,left,middle);
		merge_sort(arr,middle+1,right);
		merge(arr,left,middle,right);
	}
	return;
}
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	merge_sort(a,0,n-1);
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
