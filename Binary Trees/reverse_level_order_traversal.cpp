vector<int> reverseLevelOrder(Node *root)
{
    if(root == NULL)
        return {};
    
    if(root->left == NULL && root->right == NULL)
        return {root->data};
    
    stack<Node*>s;
    // vector<int> res;
    queue <Node*> q;
    q.push(root);
    q.push(NULL);
    
    while(q.size() > 1){
        Node *curr = q.front();
        q.pop();
        if(curr == NULL){
            q.push(NULL);
        }else{
            s.push(curr);
            if(curr->right != NULL)
                q.push(curr->right);
            if(curr->left != NULL)
                q.push(curr->left);
           
        }
    }
    vector<int> res;
    while(s.empty()== false){
        Node *curr = s.top();
        res.push_back(curr->data);
        s.pop();
    }
    
    return res;
}