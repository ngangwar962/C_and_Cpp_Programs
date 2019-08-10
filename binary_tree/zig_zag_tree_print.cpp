#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *right,*left;
};
void preorder(node *root)
{
	if(root==NULL)
	return;
	cout<<root->data<<"->";
	preorder(root->left);
	preorder(root->right);
	return;
}
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
void level_order_opp(node *root,int level)
{
	if(root==NULL)
	return;
	if(level==1)
	{
		cout<<root->data<<"->";
		return;
	}
	level_order_opp(root->right,level-1);
	level_order_opp(root->left,level-1);
	return;
}
void level_order(node *root,int level)
{
	if(root==NULL)
	return;
	if(level==1)
	{
		cout<<root->data<<"->";
		return;
	}
	level_order(root->left,level-1);
	level_order(root->right,level-1);
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
	int i,j,k;
	node *root=NULL;
	int n,val;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>val;
		insert(root,val);
	}
	preorder(root);
	cout<<"zig-zag order is "<<endl;
	int h=height(root);
	for(i=1;i<=h;i++)
	{
		if(i%2)
		{
			level_order(root,i);
		}
		else
		{
			level_order_opp(root,i);
		}
	}
	return 0;
}
