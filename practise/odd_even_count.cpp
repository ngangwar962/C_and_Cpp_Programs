#include <iostream>
using namespace std;

int main() {
	int i,j,k,n;
	
	int count=0;
	int t;
	//cout<<"enter the test cases"<<endl;
	cin>>t;
	while(t)
	{
	    count=0;
	    //cout<<"enter the size of the array"<<endl;
	    cin>>n;
	    long int a[n];
	    //cout<<"enter the elements of the array"<<endl;
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    for(i=0;i<n;i++)
	    {
	        if(a[i]%2==0)
	        {
	            for(j=i+1;j<n;j++)
	            {
	                if(a[j]%2)
	                {
	                    count++;
	                }
	            }
	        }
	    }
	    t--;
	    cout<<count<<endl;
	}
	return 0;
}
