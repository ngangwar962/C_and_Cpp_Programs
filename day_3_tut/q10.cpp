#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	n++;
	char str1[n],str2[n];
	cin>>str1>>str2;
	for(i=0;i<n-1;i++)
	{
		if(str1[i]!=str2[i])
		{
			cout<<"1"<<" ";
		}
		else
		cout<<"0"<<" ";
	}
	cout<<endl;
	return 0;
}
