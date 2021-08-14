vector<int> rightView(Node *root)
{
    if(root == NULL)
        return {};
        
    vector <int> res;
    queue <Node*> q;
    q.push(root);
    while(q.empty() == false){
        int size = q.size();
        Node *temp;
        
        for(int i =0; i < size; i++){
            temp = q.front();
            q.pop();
            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }
        }
        res.push_back(temp->data);
    }
    return res;
}