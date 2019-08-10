#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	int num[100];
	cin>>n;
	int count=0;
	while(n)
	{
		int a=n%10;
		n=n/10;
		num[count++]=a;
	}
	int start=0;
	int end=count-1;
	while(start<end)
	{
		if(num[start]!=num[end])
		{
			cout<<"not a palindrome"<<endl;
			return 0;
		}
		start++;
		end--;
	}
	cout<<"palindrome"<<endl;
	return 0;
}
