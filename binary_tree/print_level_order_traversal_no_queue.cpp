#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *left,*right;
};
int height(node *root)
{
	if(root==NULL)
	return 0;
	return max(height(root->left),height(root->right))+1;
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
void inorder(node *root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	cout<<root->data<<"->";
	inorder(root->right);
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
int main()
{
	node *root=NULL;
	int n,val;
	cout<<"enter the number of nodes to be inserted into the tree"<<endl;
	cin>>n;
	int i;
	for(i=0;i<n;i++)
	{
		cin>>val;
		insert(root,val);
	}
	inorder(root);
	cout<<"NULL"<<endl;
	int h=height(root);
	
	for(i=1;i<=h;i++)
	{
		level_order(root,i);
	}
	cout<<"NULL"<<endl;
	return 0;
}
