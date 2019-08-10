#include<iostream>
using namespace std;
int maxi=0;
class node
{
	public:
	int data;
	node *left,*right;
};
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
int max3(int a ,int b,int c)
{
	if(a>b)
	{
		if(a>c)
		{
			if(b>c)
			{
				return a;
			}
			else
			{
				return a;
			}
		}
		else
		{
			return c;
		}
	}
	else
	{
		if(b>c)
		{
			return b;
		}
		else
		{
			return c;
		}
	}
}
int check_maximum(node *root)
{
	if(root==NULL)
	return 0;
        return max3(height(root->left)+height(root->right),check_maximum(root->left),check_maximum(root->right));
}
void traverse(node *root)
{
	if(root==NULL)
	{
		return;
	}
	int count;
	count=check_maximum(root);
	if(count>maxi)
	maxi=count;
	traverse(root->left);
	traverse(root->right);
	return;
}
int main()
{
	int i,j,k,n;
	cin>>n;
	int val;
	node *root=NULL;
	for(i=0;i<n;i++)
	{
		cin>>val;
		insert(root,val);
	}
	traverse(root);
	cout<<"diameter is "<<maxi<<endl;
	return 0;
}
