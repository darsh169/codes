#include<bits/stdc++.h>
using namespace std;


struct node
{
	int data;
	int pos;
	node *left;
	node *right;
};

node *min_val(node *root)
{
	node *temp=root;
	while(temp && temp->left)
		temp=temp->left;
	return temp;
}
node *insert(node *root,int d,int p)
{
	if(root==NULL)
	{
		root=new node();
		root->data=d;
		root->pos=p;
		cout<<p;
		
	}
	else if(d>root->data)
	{
		root->right=insert(root->right,d,2*p+1);
	}
	else
	{
		root->left=insert(root->left,d,2*p);
	}
	return root;
}

node *deletenode(node *root,int a)
{
	if(root==NULL)
		return root;
	if(a>root->data)
	{
		root->right=deletenode(root->right,a);
	}
	if(a<root->data)
	{
		root->left=deletenode(root->left,a);
	}
	else
	{
		if(root->left==NULL)
		{
			node *temp=root->right;
			return temp;
		}
		else if(root->right==NULL)
		{
			node *temp=root->left;
			return temp;
		}
		node *temp=min_val(root->right);
		root->data=temp->data;
		root->right=deletenode(root->right,temp->data);
	}
	return root;
}

void inorder(node *root)
{
	if(root)
	{
		inorder(root->left);
		cout<<root->data<<":"<<root->pos<<endl;
		inorder(root->right);
	}
}

node *search(node *root,int a)
{
	if(root==NULL || root->data==a)
		return root;
	if(root->data<a)
		return search(root->right,a);
	return search(root->left,a);
}

int main()
{
	int n;cin>>n;
	node *root=NULL;
	int a;
	while(n--)
	{
		cin>>a;
		root=insert(root,a,1);
	}
	inorder(root);
	root=deletenode(root,7);
	root=deletenode(root,6);
	cout<<"new"<<endl;
	inorder(root);




	return 0;
}


