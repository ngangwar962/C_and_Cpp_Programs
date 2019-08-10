#include<iostream>
#include<stdlib.h>
using namespace std;
int h;
class node 
{
	public:
	int data;
	node *left,*right;
};
void check_height(node *root,int height)
{
	if(root->left==NULL&&root->right==NULL)
	{
		if(height!=h)
		{
			cout<<"not at same level"<<endl;
			exit(0);
		}
	}
	check_height(root->left,height+1);
	check_height(root->right,height+1);
	return;
}
void insert(node *&root,int val)
{
	node *temp=new node();
	temp->data=val;
	temp->right=NULL;
	temp->left=NULL;
	if(root==NULL)
	{
		root=temp;
		return;
	}
	if(root->data>val)
	{
		insert(root->left,val);
	}
	else
	{
		insert(root->right,val);
	}
	return;
}
int height(node *root)
{
	if(root==NULL)
	return 0;
	return max(height(root->left),height(root->right))+1;
}
int main()
{
	node *root=NULL;
	int n,val,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>val;
		insert(root,val);
	}
	h=height(root);
	cout<<"height= "<<h<<endl;
	check_height(root,1);
	return 0;
}
