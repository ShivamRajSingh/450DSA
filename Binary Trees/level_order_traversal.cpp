vector<vector<int>> levelOrder(TreeNode* root) {
    if(root == NULL){
        return {};
    }
    if(root->left == NULL && root->right == NULL)
        return {{root->val}};
    
    vector<vector<int>> res;
    queue <TreeNode*> q;
    q.push(root);
    // q.push(NULL);
    
//         while(q.size() > 1){
//             TreeNode *curr = q.front();
//             q.pop();
//             vector<int> temp;
//             if(curr == NULL){
//                 res.push_back(temp);
//                 q.push(NULL);
//             }else{
//                 temp.push_back(curr->val);
//                 if(curr->left != NULL)
//                     q.push(curr->left);
//                 if(curr->right != NULL)
//                     q.push(curr->right);
//             }
//         }
    
    
    while(q.empty() == false){
        int size = q.size();  
        vector<int> temp;
        for(int i = 0; i < size; i++){
            TreeNode *curr = q.front();
            temp.push_back(curr->val);
            q.pop();
            // if(curr != NULL)
                
                
            if(curr->left != NULL){
                q.push(curr->left);
            }
            
            if(curr->left != NULL){
                q.push(curr->right);
            }
        }
        res.push_back(temp);
    }
    
    return res;
}