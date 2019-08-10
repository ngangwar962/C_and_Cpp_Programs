#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	char str[n][100];
	for(i=0;i<n;i++)
	cin>>str[i];
	for(i=0;i<n;i++)
	cout<<str[i][0]<<" ";
	cout<<endl;
	return 0;
}
