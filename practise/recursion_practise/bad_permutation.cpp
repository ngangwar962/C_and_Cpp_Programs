#include<iostream>
//#include<bits/stdc++.h>
using namespace std;
static int actual_count=0;
int check_order(int a[],int start,int last)
{
	int i;
	for(i=1;i<last;i++)
	{
		if(a[i-1]+1==a[i])
		return 0;
	}
	return 1;
}
void permute(int a[],int start,int last)
{
	int i;
	if(start==last)
	{
		if(check_order(a,start,last))
		{
			actual_count++;
		}
		return;
	}
	for(i=start;i<last;i++)
	{
		swap(a[start],a[i]);
		permute(a,start+1,last);
		swap(a[start],a[i]);
	}
	return;
}
int main()
{
  long int i,j,k,t;
  long int n;
  long int result[1000];
  int iteration=0;
  cin>>t;
  while(t)
  {
  cin>>n;
  int count=0;
  for(i=1;i<=n;i++)
  {
    	if(n%i==0)
          count++;
  }
  int a[count];
  for(i=0;i<count;i++)
  {
    	a[i]=i+1;
  }
  permute(a,0,count);
  //cout<<actual_count<<"\n";
  result[iteration++]=actual_count;
  actual_count=0;
  t--;
  }
  for(i=0;i<iteration;i++)
    cout<<result[i]<<"\n";
  return 0;
}
