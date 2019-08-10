#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	int n;
	cin>>n;
	int persons[n+1];
	persons[0]=1;
	persons[1]=1;
	persons[2]=2;
	for(i=3;i<=n;i++)
	{
		persons[i]=persons[i-1]+(i-1)*persons[i-2];
	}
	cout<<persons[n]<<"\n";
	return 0;
}
