#include<iostream>
using namespace std;
void comb(int arr[],int n,int r,int inputindex,int outarray[],int outindex)
{
	int i;
	if(outindex==r)
	{
		for(i=0;i<outindex;i++)
		{
			cout<<outarray[i]<<" ";
		}
		cout<<endl;
		return;
	}
	if(inputindex>=n)
	return;
	comb(arr,n,r,inputindex+1,outarray,outindex);
	outarray[outindex]=arr[inputindex];
	comb(arr,n,r,inputindex+1,outarray,outindex+1);
	return;
}
int main()
{
	int arr[]={1,2,3,4};
	int r=3;
	int output[r];
	int n=sizeof(arr)/sizeof(int);
	comb(arr,n,r,0,output,0);
	return 0;
}
