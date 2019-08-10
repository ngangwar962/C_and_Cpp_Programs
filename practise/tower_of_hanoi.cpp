#include<iostream>
using namespace std;
int a[100],b[100],c[100];
void tower_of_hanoi(int a[],int b[],int c[],int n)
{
	if(n==1)
	{
		cout<<"shifting from : "<<a<<" "<<c<<endl;
		return;
	}
	tower_of_hanoi(a,c,b,n-1);
	cout<<"shifting disk from "<<a<<" "<<b<<endl;
	tower_of_hanoi(c,b,a,n-1);
	return;
}
main()
{
	tower_of_hanoi(a,b,c,2);
	return 0;
}
