#include<iostream>
using namespace std;

struct Node
{
	int data;
	struct Node* left;
	struct Node* right;
	
	Node(int val)
	{
		data=val;
		
		left=NULL;
		right=NULL;
	}
}*root;

int height(Node *root)
{
	if (root==NULL)
	 return -1;
	else
	{
		int ldepth=height(root->left);
		int rdepth=height(root->right);
		
		
		if(ldepth>rdepth)
		  return (ldepth+1);
		else return (rdepth+1);  
	}
}

int main()
{
	
	Node *root=new Node(1);
	
	root->left=new Node(2);
	root->right=new Node(3);
	
	root->left->left=new Node(4);
	 root->left->right = new Node(5); 
	 
	 cout<<"Height:"<<height(root);
	
	return 0;
}
