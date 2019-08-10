#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5,6};
	int maximum=*std::max_element(arr , arr + 6);
	cout<<maximum<<endl;
	return 0;
}
