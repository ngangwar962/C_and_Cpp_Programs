#include<iostream>
#include<malloc.h>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int *a=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}
