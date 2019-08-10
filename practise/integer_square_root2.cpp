#include<iostream>
using namespace std;
int main()
{
	int i;
	int n;
	cin>>n;
	for(i=1;i*i<=n;i++);
	cout<<i-1<<"\n";
	return 0;
}
