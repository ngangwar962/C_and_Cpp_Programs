#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int i,j,k,q;
	cin>>q;
	while(q)
	{
		string str1,str2;
		cin>>str2;
		string str11="0";
		string str22="0";
		str11+="hackerrank";
		str22+=str2;
		long int len1=str11.length();
		long int len2=str22.length();
		long int arr[len1][len2];
		for(i=0;i<len1;i++)
		arr[i][0]=0;
		for(i=0;i<len2;i++)
		arr[0][i]=0;
		/*for(i=0;i<len2;i++)
		cout<<"0"<<" ";
		cout<<"\n";*/
		for(i=1;i<len1;i++)
		{
			//cout<<"0"<<" ";
			for(j=1;j<len2;j++)
			{
				if(str11[i]==str22[j])
				{
					//cout<<str11[i]<<" "<<str22[j]<<"\n";
					arr[i][j]=arr[i-1][j-1]+1;
				}
				else
				arr[i][j]=max(arr[i-1][j],arr[i][j-1]);
				//cout<<arr[i][j]<<" ";
			}
			//cout<<"\n";
		}
		if(arr[len1-1][len2-1]==len1-1)
		cout<<"YES"<<"\n";
		else
		cout<<"NO"<<"\n";
		//cout<<arr[len1-1][len2-1]<<"\n";
		q--;
	}
	return 0;
}
