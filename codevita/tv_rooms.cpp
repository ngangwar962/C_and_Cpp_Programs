#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int i,j,k;
	long int patients[365];
	long int count=0;
	long int no_of_rooms,rate1,rate2,target_revenue;
	long int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	for(i=0;i<12;i++)
	{
		for(j=0;j<month[i];j++)
		{
		patients[count]=(6-(i+1))*(6-(i+1))+abs((j+1)-15);
		//cout<<count<<" "<<patients[count]<<"\n";
		count++;
		}	
	}
	for(i=0;i<365;i++)
	cout<<patients[i]<<" ";
	cout<<"\n";
	int flag;
	cin>>no_of_rooms;
	cin>>rate1>>rate2;
	cin>>target_revenue;
	long int revenue=0;
	for(i=5;i<=no_of_rooms;i++)
	{
		flag=0;
		revenue=0;	
		for(j=0;j<365;j++)
		{
			int ntv=no_of_rooms-i;
			if(patients[j]<=ntv)
			{
				revenue=revenue+rate2*patients[j];
				if(revenue>target_revenue)
				{
					cout<<i<<" "<<revenue<<"\n";
					flag=1;
					break;
				}
			}
			else	//
			{
				revenue=revenue+rate2*ntv;
				int tv_pat=patients-ntv;
				if(tv_patients<i)
				{
					revenue=revenue+i*rate1;
				}
				else
				{
					
				}
			}
		}
		if(flag==1)
		break;
	}
	return 0;
}
