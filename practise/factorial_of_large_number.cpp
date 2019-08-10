#include<iostream>
using namespace std;
int main()
{
	int n;
	int i,j,k;
	int res[2000]={0};
	res[0]=2;
	cin>>n;
	int carry=0;
	int count=0;
	for(i=3;i<=n;i++)
	{
		carry=0;
		for(j=0;j<=count;j++)
		{
			long int temp=res[j]*i+carry;
			res[j]=temp%10;
			//cout<<res[j]<<endl;
			carry=temp/10;
		}
		while(carry)
		{
			res[j++]=carry%10;
			carry/=10;
			count++;
		}
		//cout<<res[count-1]<<endl;
	}
	for(i=count;i>=0;i--)
	{
		cout<<res[i];
	}
	cout<<endl;
	return 0;
}
