#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node
{
	public:
	int data;
	node *right,*left;
};
void all_paths(node *&root,int count,int str[])
{
	int i;
	if(root==NULL)
	return;
	str[count]=root->data;
	if(((root->left==NULL)&&(root->right==NULL)))
	{
		for(i=0;i<=count;i++)
		cout<<str[i]<<" ";
		cout<<"\n";
		return;
	}
	all_paths(root->left,count+1,str);
	all_paths(root->right,count+1,str);
	return;
}
void insert(node *&root,int value)
{
	node *temp=new node();
	temp->data=value;
	temp->right=NULL;
	temp->left=NULL;
	if(root==NULL)
	{
		root=temp;
		return;
	}
	if(root->data>value)
	{
		insert(root->left,value);
	}
	else
	{
		insert(root->right,value);
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
int main()
{
	int i;
	node *root=new node();
	root=NULL;
	int n,temp;
	cin>>n;
	int str[n];
	for(i=0;i<n;i++)
	{
		cin>>temp;
		insert(root,temp);
	}
	inorder(root);
	cout<<"\n";
	all_paths(root,0,str);
	return 0;
}
