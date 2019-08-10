#include<iostream>
#include<malloc.h>
using namespace std;
struct temp
{
	int x,y;
};
typedef struct temp tmp;
int main()
{
	int i,j,k;
	tmp *sptr,*sarr;
	sptr=(tmp*)malloc(sizeof(tmp));
	sarr=(tmp*)malloc(sizeof(tmp));
	sptr->x=50;
	sarr[5].x=100;
	cout<<sptr->x<<" "<<sarr[5].x<<endl;
	return 0;
}
