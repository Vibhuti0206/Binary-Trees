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
void bottomViewHelper(node *root, int level, int dist, map<int, pair<int, int> > &mp) {
    if(root == NULL) {
        return;
    }
    if(mp.find(dist) == mp.end() or level>=mp[dist].second) {
        mp[dist] = {root->data, level};
    }
    bottomViewHelper(root->left, level+1, dist-1, mp);
    bottomViewHelper(root->right, level+1, dist+1, mp);
}
void bottomView(node *root)
{
   map<int, pair<int, int> >mp;
   bottomViewHelper(root, 0, 0, mp);
   for(auto val:mp){
       cout<<val.second.first<<" ";
   }
}
int main()
{
	node *root=build();
	bottomView(root);
	
	return 0;
}
