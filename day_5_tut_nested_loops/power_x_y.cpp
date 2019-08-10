#include<iostream>
#include<math.h>

using namespace std;
int main()
{
	int i,j,k,l,n,m;
	int count=0;
	cin>>n>>m;
	int x[n],y[m];
	for(i=0;i<n;i++)
	cin>>x[i];
	for(i=0;i<m;i++)
	cin>>y[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(pow(x[i],y[j])>pow(y[j],x[i]))
			{
				count++;
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
