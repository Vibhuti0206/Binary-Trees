vector<int> Solution::preorderTraversal(TreeNode* A) {

    vector<int> v;
    stack<TreeNode* >s;
    s.push(A);
    while(!s.empty())
    {
        TreeNode *top1 = s.top();
        v.push_back(top1->val);
        s.pop();
        if(top1->right)
         s.push(top1->right);
        if(top1->left)
         s.push(top1->left);
    }
    return v;
}
