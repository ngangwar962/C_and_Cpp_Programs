#include<iostream>
using namespace std;
class node
{
	public:
	int data;
	node *right,*left;
};
int identical(node *root1,node *root2)
{
	if((root1==NULL)&&(root2==NULL))
	return 1;
	if(((root1)&&(!root2))&&(!(root1)&&(root2)))
	{
		//cout<<root1<<" "<<root2<<endl;
		//cout<<"caught at someone is null"<<endl;
		return 0;
	}
	if(root1->data==root2->data)
	{
		if(identical(root1->left,root2->left)&&identical(root1->right,root2->right))
		return 1;
		else{
			//cout<<"caught here someone made it 0"<<endl;
			return 0;
		}
	}
	return 0;
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
int main()
{
	int i,j,k;
	node *root1=NULL;
	int n;
	cout<<"enter the no of nodes in the first tree"<<endl;
	cin>>n;
	int val;
	cout<<"enter the nods of the first tree"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>val;
		insert(root1,val);
	}
	node *root2=NULL;
	cout<<"enter the total no of nodes in second tree"<<endl;
	cin>>n;
	cout<<"enter the nodes of the second tree"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>val;
		insert(root2,val);
	}
	cout<<"nodes inserted"<<endl;
	inorder(root1);
	cout<<"NULL"<<endl;
	inorder(root2);
	cout<<"NULL"<<endl;
	if(identical(root1,root2))
	{
		cout<<"Yes they are identical"<<endl;
	}
	else
	{
		cout<<"not identical"<<endl;
	}
	return 0;
}
