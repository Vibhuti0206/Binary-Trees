int helper(TreeNode *root)
{
    if(root == NULL)
     return 0;
    if(root->left == NULL && root->right == NULL)
     return 1;
    if(root->left == NULL)
    return helper(root->right)+1;
    if(root->right == NULL)
     return helper(root->left) + 1;
    int ls = helper(root->left);
    int rs = helper(root->right);
    return min(ls,rs)+1;
    
}
int Solution::minDepth(TreeNode* A) {
    return helper(A);
}
