#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n;
	cin>>n;
	int runs[n],balls[n];
	double max_strike_rate=0;
	for(i=0;i<n;i++)
	{
		cin>>runs[i]>>balls[i];
		double temp_strike_rate=(double)runs[i]/balls[i];
		if(temp_strike_rate>max_strike_rate)
		{	
			max_strike_rate=temp_strike_rate;
		}
	}
	cout<<max_strike_rate*100<<endl;
	return 0;
}
