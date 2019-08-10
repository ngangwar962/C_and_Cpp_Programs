#include<iostream>
using namespace std;
class node 
{
	public:
	int data;
	node *left,*right;
};
int temp[100];
void print_traversal(node *root,int count)
{
	if(root==NULL)
	return;
	int i;
	temp[count]=root->data;
	if((root->left==NULL)&&(root->right==NULL))
	{
		for(i=0;i<=count;i++)
		{
			cout<<temp[i]<<" ";
		}
		cout<<endl;
		return;
	}
	print_traversal(root->left,count+1);
	print_traversal(root->right,count+1);
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
int main()
{
	int n,val,i;
	node *root=NULL;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>val;
		insert(root,val);
	}
	print_traversal(root,0);
	return 0;
}
