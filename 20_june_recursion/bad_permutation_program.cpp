#include<iostream>
using namespace std;
static int county=0;
void permute(int a[],int start,int last)
{
	int i;
	if(start==last)
	{
		int flag=0;
		for(i=0;i<last-1;i++)
		{
			if(a[i]+1==a[i+1])
			{
				flag=1;
				break;
			}	
		}
		if(flag==0)
		{
			for(i=0;i<last;i++)
			cout<<a[i]<<" ";
			county++;
		}
		cout<<endl;
		return;
	}
	for(i=start;i<last;i++)
	{
		swap(a[start],a[i]);
		permute(a,start+1,last);
		swap(a[start],a[i]);
	}
	return;
}
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	int a[n];
	int count=0;
	for(i=1;i<=n;i++)
	if(n%i==0)
	count++;
	for(i=0;i<count;i++)
	{	
		a[i]=i+1;
	}
	permute(a,0,count);
	cout<<county<<endl;
	return 0;
}
