#include<iostream>
using namespace std;
int s[]={0,1,2,3,4};
int coin_change(int s[],int sum,int index)
{
	if(sum==0)
	return 0;
	if(index==0)
	return 0;
	int k=0;
	if(sum>s[index])
	{
		k=coin_change(s,sum-s[index],index);
	}
	return k+coin_change(s,sum,index-1);
}
int main()
{
	int i,j,k;
	int sum=4;
	int count=coin_change(s,sum,1);
	cout<<count<<endl;
	return 0;
}
