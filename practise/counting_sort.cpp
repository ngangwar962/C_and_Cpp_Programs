#include<iostream>
#include<string.h>
#define MAX 1000000
using namespace std;
int main()
{
    int i,j,k;
    char str[MAX][100];
    int count[MAX]={0},input[MAX]={0};
    int n;
    cin>>n;
    int maximum=0;
    char final_str[n+1][100];
    for(i=0;i<n;i++)
    {
        cin>>input[i]>>str[i];
        if(input[i]>maximum)
        maximum=input[i];
    }
    for(i=0;i<n/2;i++)
    {
    	str[i][0]=45;
    	str[i][1]=0;
    }
    cout<<"maximum="<<maximum<<endl;
    for(i=0;i<n;i++)
    {
        count[input[i]]++;
    }
    for(i=0;i<=maximum;i++)
    cout<<count[i]<<" ";
    cout<<endl;
    int count1[maximum+1]={0};
    count1[0]=count[0];
    for(i=1;i<=maximum;i++)
    {
        count1[i]=count[i]+count1[i-1];
    }
    for(i=0;i<=maximum;i++)
    cout<<count1[i]<<" ";
    cout<<endl;
    for(i=n-1;i>=0;i--)
    {
    	j=0;
    	int index=0;
    	while(str[i][j]!='\0')
    	{
    		final_str[count1[input[i]]][index++]=str[i][j];
    		j++;
    	}
    	final_str[count1[input[i]]][index]='\0';
    	count1[input[i]]--;
    }
    int flag[n/2]={0};
    for(i=0;i<n/2;i++)
    flag[i]=0;
    int temp=0;
    for(i=1;i<=n;i++)
    {
    temp=0;
    	for(j=0;j<(n/2);j++)
    	{
    		if((strcmp(final_str[i],str[j])==0)&&(flag[j]==0))
    		{
    			flag[j]=1;
    			temp=1;
    			break;
    		}
    	}
    	if(temp==1)
    	cout<<"-"<<" ";
    	else
    	cout<<final_str[i]<<" ";
    }
    cout<<endl;
    return 0;
}
