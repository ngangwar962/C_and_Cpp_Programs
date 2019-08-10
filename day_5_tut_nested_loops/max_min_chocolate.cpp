#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{	
	int i,j,k,l,min=10000,max=0,n,m;
	cout<<"enter the size"<<endl;
	cin>>n;
	int a[n];
	cout<<"enter element of the array"<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];
	cout<<"enter the subarray size"<<endl;
	cin>>m;
	if(m>n)
	return 0;
	int index=0;
	int minim=0;
	/*for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;*/
	for(i=0;i<n-1;i++)
	{
		index=i;
		for(j=i+1;j<n;j++)
		{
			if(a[index]>a[j])
			{
				index=j;
				//minim=a[index];
			}
		}
		int temp;
		temp=a[i];
		a[i]=a[index];
		a[index]=temp;
	}
	j=0;
	int start=0,end=0;
	while((j<n)&&(j+m-1<n))
	{
	        int temp=abs(a[j]-a[j+m-1]);
		if(min>temp)
		{
			start=j;
			end=j+m-1;
			min=temp;
		}	
		j++;
	}
	for(i=start;i<=end;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
