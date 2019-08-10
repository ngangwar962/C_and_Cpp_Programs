#include<iostream>
using namespace std;
int main()
{
	int i,j,k,a,max=0;
	while(1)
	{
		cin>>a;
		if(a<=0)
		break;
		else
		{
			if(a>max)
			max=a;
		}
	}
	cout<<max<<endl;
	return 0;
}
