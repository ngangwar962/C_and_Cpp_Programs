#include<iostream>
#include<stdlib.h>
using namespace std;
class node
{
	public:
	int data;
	node *right,*left;
};

void insert(node *&root,int val)
{
	node *temp=new node();
	temp->data=val;
	temp->left=NULL;
	temp->right=NULL;
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
int node_balanced(node *root)
{
	if(root==NULL)
	return 1;
	int lefth=height(root->left);
	int righth=height(root->right);
	if((abs(lefth-righth)<=1)&&(node_balanced(root->left))&&(node_balanced(root->right)))
	return 1;
	return 0;
}
int main()
{
	int n,val;
	cin>>n;
	node *root=NULL;
	int i;
	for(i=0;i<n;i++)
	{
		cin>>val;
		insert(root,val);
	}
	int h=height(root);
	cout<<"height= "<<h<<endl;
	if(node_balanced(root))
	cout<<"height balanced"<<endl;
	else
	cout<<"not balanced"<<endl;
	return 0;
}
