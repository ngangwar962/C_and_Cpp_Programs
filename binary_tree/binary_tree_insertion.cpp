#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *left,*right;
};
int leaf_nodes(node *root)
{
	if(root==NULL)
	return 0;
	if(root->left==NULL&&root->right==NULL)
	return 1;
	return leaf_nodes(root->left)+leaf_nodes(root->right);
}
int height(node *root)
{
	if(root==NULL)
	return 0;
	return max(height(root->left),height(root->right))+1;
}
int sum_of_data(node *root)
{
	if(root==NULL)
	return 0;
	return sum_of_data(root->left)+sum_of_data(root->right)+root->data;
}
int main()
{
	int i,j,k;
	node *root;
	root=new node();
	root->data=5;
	node *temp1=new node();
	temp1->data=15;
	root->left=temp1;
	node *temp2=new node();
	temp2->data=20;
	root->right=temp2;
	node *temp3=new node();
	temp3->data=21;
	root->left->left=temp3;
	node *temp4=new node();
	temp4->data=17;
	root->right->right=temp4;
	cout<<"height of the tree is "<<height(root)<<endl;
	cout<<"sum of all the nodes is "<<sum_of_data(root)<<endl;
	cout<<"leaf nodes are "<<leaf_nodes(root)<<endl;
	return 0; 
}
