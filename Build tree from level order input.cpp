#include<bits/stdc++.h>
using namespace std;
class node{
	public:
	int data;
	node *left;
	node *right;
	node(int d)
	{
		data = d;
	    left = NULL;
		right = NULL;
	}
};

node *build()
{
	queue<node *> q;
	int d;
	cin>>d;
	
	node *root = new node(d);
	q.push(root);
	while(!q.empty())
	{
		node *f = q.front();
		q.pop();
		int l,r;
		cin>>l>>r;
		
		if(l != -1)
		{
			f->left = new node(l);
			q.push(f->left);
		}
	
		 if(r != -1)
		{

		   f->right = new node(r);
		   q.push(f->right);
		}
        
	}

	return root;
}
void print(node *root)
{
	if(root == NULL)
	 return ;
	 cout<<root->data<<" ";
	 print(root->left);
	 print(root->right);
}
int main()
{
  node *root = build();
  print(root);
  return 0;
}
