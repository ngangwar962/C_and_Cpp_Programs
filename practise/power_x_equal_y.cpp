#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k,n,m;
	cout<<"enter the size of two array"<<endl;
	cin>>n>>m;
	int a[n],b[m];
	cout<<"enter the elements of the first array"<<endl;
	for(i=0;i<n;i++)
	cin>>a[i];	
	cout<<"enter the elements of the second array"<<endl;
	for(i=0;i<m;i++)
	cin>>b[i];
	int count=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(pow(a[i],b[j])>pow(b[j],a[i]))
			{
				count++;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
