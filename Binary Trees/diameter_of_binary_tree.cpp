#include "codeblock.h"

int res = -inf;
int height(TreeNode *root){
    if(root == NULL)
        return 0;
    
    int lh = height(root->left);
    int rh = height(root->right);
    res = max(res, lh+rh);
    return 1+ max(lh,rh);
}
int diameterOfBinaryTree(TreeNode* root) {
    int h = height(root);
    return res;
}
