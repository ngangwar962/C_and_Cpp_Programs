#include<iostream>
using namespace std;
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
void inorder(node *root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
	return;
}
void preorder(node *root)
{
	if(root==NULL)
	return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
	return;
}
void postorder(node *root)
{
	if(root==NULL)
	return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
	return;
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
	cout<<"inorder traversal is: ";
	inorder(root);
	cout<<endl;
	cout<<"preorder traversal is ";
	preorder(root);
	cout<<endl;
	cout<<"postorder traversal is ";
	postorder(root);
	cout<<endl;
	return 0;
}
