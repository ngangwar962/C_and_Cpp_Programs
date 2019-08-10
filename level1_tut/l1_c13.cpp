#include<iostream>
using namespace std;
int main()
{
	int i,j,k,terms;
	char m='A',n='Z';
	cin>>terms;	
	for(i=1;i<=terms;i++)
	{
		cout<<m<<n<<" ";
		m+=2;
		n--;
	}
	cout<<endl;
	return 0;
}
