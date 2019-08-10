#include<iostream>
using namespace std;
int fact(int chocolate,int wrap)
{
	if(chocolate<wrap)
	return 0;
	int new_chocolate=chocolate/wrap;
	return new_chocolate+fact(new_chocolate+chocolate%wrap,wrap);
}
int main()
{
	int money,price,wrap;
	cin>>money>>price>>wrap;
	int chocolate=money/price;
	cout<<"total number of chocolate is: "<<chocolate+fact(chocolate,wrap)<<endl;
	return 0;
}
	
