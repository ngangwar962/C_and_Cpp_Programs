#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int a[n]={100,180,260,310,40,535,695};
	/*for(i=0;i<n;i++)
	{
		cin>>a[i];
	}*/
	int max=0;
	int flag=0;
	int indexi=0;
	int indexj=0;
	int previous_max=0;
	int global_max=0;
	for(i=0;i<n-1;i++)
	{
		flag=0;
		max=0;
		for(j=i+1;j<n;j++)
		{
			if(a[j]-a[i]>max)
			{
				indexi=i;
				indexj=j;
				max=a[j]-a[i];
			}
			else
			{
				cout<<"("<<indexi<<","<<indexj<<")"<<" ";
				flag=1;
				i=j-1;
				break;
			}
		}
		if(max==0)
		{
			cout<<"no profit"<<endl;
			break;
		}
		if(flag==0)
		{
			cout<<"("<<indexi<<","<<indexj<<")"<<" ";
		}
	}
	return 0;
}
