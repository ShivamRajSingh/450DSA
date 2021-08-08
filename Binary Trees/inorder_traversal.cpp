vector<int> inorderTraversal(TreeNode* root) {
    vector <int> res;
    stack <TreeNode*> s;
    TreeNode* temp = root;
    while(temp!= NULL || s.empty() == false){
        while(temp != NULL){
            s.push(temp);
            temp = temp->left;
        }
        temp = s.top();
        res.push_back(temp->val);
        s.pop();
        temp = temp->right;
    }
    return res;
}

void inorder(vector <int> &res , TreeNode *root){
    if(root == NULL){
        return;
    }
    
    preorder(res, root->left);
    res.push_back(root->data);
    preorder(res, root->right);
    
}
vector<int> inorderTraversalRecursive(TreeNode* root) {
    vector <int> res;
    
    preorder(res,root);
    
    return res;
}
