 void postorder (TreeNode *root, vector <int> &res){
    if(root == NULL)
        return;
    postorder(root->left, res);
    postorder(root->right, res);
    res.push_back(root->val);
}
vector<int> postorderTraversal(TreeNode* root) {
    if(root == NULL){
        return {};
    }
    if(root->left == NULL && root->right == NULL){
        return {root->val};
    }
    
    vector <int> res;
    postorder(root, res);
    return res;
}