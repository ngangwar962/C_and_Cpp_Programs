#include<iostream>
using namespace std;
int main()
{
	int max1,max2,max3;
	int n;
	cout<<"enter the size of the array"<<endl;
	cin>>n;
	int a1[n];
	int i;
	cout<<"enter the element of the array"<<endl;
	for(i=0;i<n;i++)
	cin>>a1[i];
	int a=a1[0];
	int b=a1[1];
	int c=a1[2];
	max1=((a>b)?((a>c)?((b>c)?a:a):c):((b>c)?((a>c)?b:b):c));
	max2=((a>b)?((a>c)?((b>c)?b:c):a):((b>c)?((a>c)?a:c):b));
	max3=((a>b)?((a>c)?((b>c)?c:b):b):((b>c)?((a>c)?c:a):a));
	for(i=3;i<n;i++)
	{
		if(a1[i]>max1)
		{
			max3=max2;
			max2=max1;
			max1=a1[i];
		}
		else if(a1[i]>max2&&a1[i]<max1)
		{
			max3=max2;
			max2=a1[i];
		}
		else if(a1[i]<max1&&a1[i]<max2&&a1[i]>max3)
		{
			max3=a1[i];
		}
	}
	cout<<"third largest value is "<<max3;
	cout<<endl;
	return 0;
}
