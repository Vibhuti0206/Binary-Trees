/*void tree_free(TreeNode* A)
{
if(A)
{
tree_free(A->left);
tree_free(A->right);
free(A->left);
free(A->right);
}
} */ 
void helper(TreeNode *A,int B,vector<vector<int>> &v,vector<int> &temp)
{
  if(A== NULL)
   return;
  temp.push_back(A->val);
  B = B - A->val;
  if(B == 0 && (A->left == NULL && A->right == NULL))
     v.push_back(temp);
 
  helper(A->left,B,v,temp);
  
  helper(A->right,B,v,temp);
  
  temp.pop_back();
}
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector<vector<int>> v;
    vector<int> temp;
    helper(A,B,v,temp);
  /*  tree_free(A);
free(A);  */

    return v;
}

//COMMENT:the commented lines in code are written to oovercome moemore exceeded limit
