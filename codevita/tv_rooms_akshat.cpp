#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N, R1, R2, T, nop[366], targ, ntv, patients, da, k=1;
	cin>>N>>R1>>R2>>T;

	for(int M = 1; M <= 7; M++)
	{
		if(M==2)
			da = 28;
		else if(M%2)
			da = 31;
		else
			da = 30;
		for(int D = 1; D <= da; D++)
		{
			nop[k] = (6-M) * (6-M) + abs(D-15);
			k++;
		}
	}
	for(int M = 8; M <= 12; M++)
	{
		if(M%2)
			da = 30;
		else
			da = 31;
		for(int D = 1; D <= da; D++)
		{
			nop[k] = (6-M) * (6-M) + abs(D-15);
			k++;
		}
	}
	int i;
	for(i=0;i<k;i++)
	cout<<nop[i]<<" ";
	cout<<"\n";
	for(int tv = 0; tv <= N; tv++)
	{
		ntv = N - tv;
		targ = 0;
		for (int date = 1; date < 366; ++date)
		{
			patients = nop[date];
			if(patients > ntv)
			{
				targ = targ + ntv*R2;
				patients -= ntv;
				if(patients > tv)
				{
					targ = targ + tv*R1;
					//cout<<tv<<" "<<targ<<"\n";
				}
				else
				{
					targ = targ + patients*R1;
					//cout<<"patients ="<<patients<<" "<<targ<<"\n";
				}
			}
			else
			{
				targ = targ + patients*R2;
				//cout<<patients<<" "<<targ<<"\n";
			}
			if(T <= targ)
			{
				cout<<tv;
				cout<<"\n";
				return 0;
			}
		}
	}

	cout<<N;

	return 0;
}
