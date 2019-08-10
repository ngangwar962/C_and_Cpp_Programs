#include<iostream>
using namespace std;
void function(int n)
{
	int operation[n+1];
	operation[0]=0;
	for(int i=1;i<=n;i++)
	{
		if(i%2)//odd
		{
			operation[i]=operation[i-1]+1;
		}
		else
		{
			operation[i]=operation[i/2]+1;
		}
	}
	cout<<operation[n]<<endl;
}
int main()
{
	int n;
	cin>>n;
	function(n);
	return 0;
} 
