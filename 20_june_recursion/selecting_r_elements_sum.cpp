#include<iostream>
using namespace std;
void combination(int inputarray[],int n,int r,int inindex,int outarray[],int outindex,int required)
{
	if(outindex==r)
	{
		int i,sum=0;
		for(i=0;i<outindex;i++)
		sum+=outarray[i];
		if(sum==required)
		{
			for(i=0;i<outindex;i++)
			cout<<outarray[i]<<" ";
		}
		cout<<endl;
		return;
	}
	if(inindex>=n)
	return;
	combination(inputarray,n,r,inindex+1,outarray,outindex,required);
	outarray[outindex]=inputarray[inindex];
	combination(inputarray,n,r,inindex+1,outarray,outindex+1,required);
	return;
}
int main()
{
	int i,j,k;
	int inputarray[]={1,2,3,4,5};
	cout<<"enter the size of the out array and required sum"<<endl;
	int r,required;
	cin>>r>>required;
	int n=sizeof(inputarray)/sizeof(int);
	int outarray[r];
	combination(inputarray,n,r,0,outarray,0,required);
	return 0;
}
