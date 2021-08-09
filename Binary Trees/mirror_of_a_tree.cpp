 TreeNode* invertTree(TreeNode* root) {
    if(root == NULL)
        return NULL;
    if(root->left == NULL && root->right == NULL)
        return root;
    
    TreeNode *t = root->left;
    root->left = root->right;
    root->right = t;
    
    if(root->left){
        invertTree(root->left);
    }
    
    if(root->right){
        invertTree(root->right);
    }
    return root;
}