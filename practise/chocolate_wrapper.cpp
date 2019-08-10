#include<iostream>
using namespace std;
int calculate(int chocolate,int wrapper)
{
	if(wrapper>chocolate)
	return chocolate;
	int temp=(chocolate/wrapper);
	return temp+calculate((temp+chocolate%wrapper),wrapper);	 
} 
int main()
{
	int i,j,k;
	int money,price,wrap;
	cin>>money>>price>>wrap;
	int chocolate=money/price;
	chocolate=chocolate+calculate(chocolate,wrap);
	cout<<chocolate<<endl;
	return 0;
}
