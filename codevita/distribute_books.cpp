#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int i,j,k,n;
	cin>>n;
	long int books[n+1];
	books[0]=0;
	books[1]=0;
	books[2]=1;
	for(i=3;i<=n;i++)
	{
		books[i]=(i-1)*(books[i-1]%1000000007+books[i-2]%1000000007)%1000000007;
		if(books[i]<0)
		books[i]+=1000000007;
	}
	cout<<books[n]<<"\n";
	return 0;
}
