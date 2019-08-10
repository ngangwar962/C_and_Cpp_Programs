#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int start=0,end=n-1;
	while(start<end)
	{
		if(a[start]!=a[end])
		{
			cout<<"not palindrome"<<endl;
			return 0;
		}
		start++;
		end--;
	}
	cout<<"palindrome"<<endl;
	return 0;
}
