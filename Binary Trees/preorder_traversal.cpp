#include "codeblock.h"

 void preorder(vector <int> &res , TreeNode *root){
    if(root == NULL){
        return;
    }
    
    res.push_back(root->data);
    preorder(res, root->left);
    preorder(res, root->right);
    
}
vector<int> preorderTraversalRecursive(TreeNode* root) {
    vector <int> res;
    
    preorder(res,root);
    
    return res;
}
vector<int> preorderTraversalIterative(TreeNode* root) {
    if(root == NULL){
        return {};
    }
    if(root->left == NULL && root->right == NULL)
        return {root->data};
    
    vector <int> res;
    stack <TreeNode*> s;
    s.push(root);
    while(s.empty() == false){
        TreeNode *curr = s.top();
        res.push_back(curr->data);
        s.pop();
        
        if(curr->right != nullptr){
            s.push(curr->right);    
        }
        
        if(curr->left != nullptr){
            s.push(curr->left);    
        }
        
    }
    
    return res;

}

int main(){
    TreeNode* root;
    root = root->create();
    vector <int> res = preorderTraversalIterative(root);
    print(res);
    return 0;
}