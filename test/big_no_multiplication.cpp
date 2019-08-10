#include<iostream>
using namespace std;
#define MAX 100000
int main()
{
	int i,j,k,n;
	int len=0;
	int res[MAX];
	cin>>n;
	res[0]=1;
	int count=1;
	int carry=0;
	for(j=2;j<=n;j++)
	{
		carry=0;
		for(i=0;i<count;i++)
		{
			int temp=j*res[i]+carry;
			carry=temp/10;
			res[i]=temp%10;
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
