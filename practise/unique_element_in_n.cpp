#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	int a[2*n-1];
	int temp=0;
	for(i=0;i<2*n-1;i++)
	{
	cin>>a[i];
	temp=temp^a[i];
	}
	cout<<"unique element is "<<temp<<endl;
	return 0;
}
