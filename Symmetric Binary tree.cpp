bool helper(TreeNode *root1,TreeNode *root2)
{
    if(root1 == NULL && root2 == NULL)
     return true;
    if(root1 && root2 && root1->val == root2->val)
      return (helper(root1->left,root2->right ) && helper(root1->right,root2->left));
    return false;
}
int Solution::isSymmetric(TreeNode* A) {
    
    if(helper(A,A))
     return 1;
    else 
    return 0;
    
   
}
