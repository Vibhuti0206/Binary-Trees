TreeNode *helper(TreeNode *root1)
{
   if(root1 == NULL)
    return NULL;
   swap(root1->left,root1->right);
   helper(root1->left);
   helper(root1->right);
   return root1;
}
TreeNode* Solution::invertTree(TreeNode* A) {
    return helper(A);
}
