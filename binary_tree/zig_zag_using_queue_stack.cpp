#include<iostream>
#include<stack>
#include<queue>
using namespace std;
queue<int> q;
stack<int> st;
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
void queue_operation(node *root,int level)
{
	if(level==1)
	{
		q.push(root->data);
		return;
	}
	queue_operation(root->left,level-1);
	queue_operation(root->right,level-1);
	return;
}
void stack_operation(node *root,int level)
{
	if(level==1)
	{
		st.push(root->data);
		return;
	}
	stack_operation(root->left,level-1);
	stack_operation(root->right,level-1);
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
	int i,j,k;
	int n,val;
	cout<<"enter the number of nodes to be inserted"<<endl;
	cin>>n;
	cout<<"enter the entries of the tree"<<endl;
	node *root=NULL;
	for(i=0;i<n;i++)
	{
		cin>>val;
		insert(root,val);
	}
	cout<<"nodes inserted successfully"<<endl;
	int h=height(root);
	cout<<"height of the tree is: "<<h<<endl;
	for(i=1;i<=h;i++)
	{
		if(i%2)
		{	
			queue_operation(root,i);	
		}
		else
		{
			stack_operation(root,i);
		}
		while(!q.empty())
		{
			cout<<q.front()<<" ";
			q.pop();
		}
		while(!st.empty())
		{
			cout<<st.top()<<" ";
			st.pop();
		}
	}
	return 0;
	
}
