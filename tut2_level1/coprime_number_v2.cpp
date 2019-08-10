#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int i,j,k,n1,n2,arr1[1000],arr2[100];
	int sq1=sqrt(n1);
	int sq2=sqrt(n2);
	int count1=0;
	int count2=0;
	int min=(sq1>sq2)?sq2:sq1;
	for(i=2;i<=min;i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			cout<<"non coprime number"<<endl;
			return 0;
		}
	}
	cout<<"entered numbers are coprime"<<endl;	
	return 0;	
}
