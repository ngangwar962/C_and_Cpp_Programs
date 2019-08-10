#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *right,*left;
};
int mirror_check(node *root1,node *root2)
{
	if(root1==NULL&&root2==NULL)
	return 1;
	if(((root1)&&(!root2))||((!root1)&&(root2)))
	return 0;
	if(root1->data==root2->data)
	{
		if((mirror_check(root1->left,root2->right))&&(mirror_check(root1->right,root2->left)))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
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
	node *ptr=root;
	if(ptr->data>val)
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
	node *ptr=root;
	inorder(root->left);
	cout<<root->data<<"->";
	inorder(root->right);
	return;
}
int main()
{
	int i,j,k,n;
	int val;
	node *root1=NULL,*root2=NULL;
	root1=new node();
	root2=new node();
	node *temp11,*temp12,*temp13,*temp14;
	node *temp21,*temp22,*temp23,*temp24;
	temp11=new node();
	temp12=new node();
	temp13=new node();
	temp14=new node();
	temp21=new node();
	temp22=new node();
	temp23=new node();
	temp24=new node();
	/******/
	root1->data=20;
	temp11->data=5;
	root1->left=temp11;
	temp12->data=25;
	root1->right=temp12;
	temp13->data=30;
	root1->right->right=temp13;
	temp14->data=35;
	root1->right->right->right=temp14;
	
	/*********/
	root2->data=20;
	temp21->data=25;
	root2->left=temp21;
	temp22->data=30;
	root2->left->left=temp22;
	temp23->data=35;
	root2->left->left->left=temp23;
	temp24->data=5;
	root2->right=temp24;
	
	/******/
	inorder(root1);
	cout<<"NULL"<<endl;
	inorder(root2);
	cout<<"NULL"<<endl;
	
	if(mirror_check(root1,root2))
	{
		cout<<"yes mirror image"<<endl;
		return 0;
	}
	else
	{
		cout<<"no they are not the mirror image"<<endl;
		return 0;
	}
	return 0;
}
