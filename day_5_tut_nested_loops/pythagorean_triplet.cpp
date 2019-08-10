#include<iostream>
using namespace std;
bool check_triplet(int a[],int n)
{
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<n;k++)
			{
				if((i!=j)&&(j!=k)&&(i!=k))
				{
					if(a[i]*a[i]+a[j]*a[j]==a[k]*a[k])
					return true;
				}
			}
		}
	}
}
int main()
{
	int i,j,k,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	bool ch=check_triplet(a,n);
	if(ch)
	cout<<"triplet found"<<endl;
	return 0;	
}
