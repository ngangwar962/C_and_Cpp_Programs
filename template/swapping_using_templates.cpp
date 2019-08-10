#include<iostream>
using namespace std;
template<class T>
void swaps(T &var1,T &var2)
{
	T temp;
	temp=var1;
	var1=var2;
	var2=temp;
	return;
}
int main()
{
	int x=10,y=20;
	int *p1=&x,*p2=&y;
	swaps(p1,p2);
	cout<<x<<" "<<y<<" "<<*p1<<" "<<*p2<<endl;
	return 0;
}
