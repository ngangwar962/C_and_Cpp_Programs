#include<iostream>
using namespace std;
void merge(int a[],int start,int mid,int last)
{
	int i,j,k;
	int n1=mid-start+1;
	int n2=last-mid;
	int left[n1];
	int right[n2];
	for(i=0;i<n1;i++)
	{
		left[i]=a[start+i];
	}
	for(i=0;i<n2;i++)
	{
		right[i]=a[mid+i+1];
	}
	i=0;j=0;k=0;
	while(i<n1&&j<n2)
	{
		if(left[i]<right[j])
		{
			a[start+k]=left[i];
			k++;
			i++;
		}
		else
		{
			a[start+k]=right[j];
			j++;
			k++;
		}
	}
	while(i<n1)
	{
		a[start+k]=left[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		a[start+k]=right[j];
		j++;
		k++;
	}
	return;
}
void mergesort(int a[],int start,int last)
{
	int mid=(start+last-1)/2;
	if(start<last)
	{
		cout<<"mid= "<<mid<<"\n";
		mergesort(a,start,mid);
		mergesort(a,mid+1,last);
		merge(a,start,mid,last);
	}
	return;
	
}
int main()
{
	int i,j,k,l;
	int n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	mergesort(a,0,n-1);
	cout<<"now array is sorted"<<"\n";
	cout<<"enter the value of k"<<"\n";
	cin>>k;
	int minimum=10000;
	int index_i=0;
	int index_j=0;
	int flag=0;
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	for(i=0;i<n-k;i++)
	{
		int local_min=a[i+k-1]-a[i];
		if(local_min<minimum)
		{
			flag=1;
			index_i=i;
			index_j=i+k-1;
			minimum=local_min;
		}
	}
	if(flag==1)
	{
		cout<<index_i<<","<<index_j<<" "<<minimum<<"\n";
		return 0;
	}
	cout<<"not found"<<endl;
	return 0;
}
