#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,n;
	cin>>n;
	int res[3000];
	res[0]=2;
	int count=1,carry;
	for(i=3;i<=n;i++)
	{
		carry=0;
		for(j=0;j<count;j++)
		{
			long int temp=i*res[j]+carry;
			res[j]=temp%10;
			carry=temp/10;
		}
		while(carry)
		{
			res[count]=carry%10;
			carry/=10;
			count++;
		}
	}
	for(i=count-1;i>=0;i--)
	cout<<res[i];
	cout<<endl;
	return 0;
}
