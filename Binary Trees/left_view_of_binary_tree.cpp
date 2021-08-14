void leftView(Node *root)
{
   // Your code here
   if(root == NULL)
        return;
   queue<Node*> q;
   q.push(root);
   while(q.empty() == false){
       int size = q.size();
       for(int i =0; i<size ; i++){
           Node* curr = q.front();
           q.pop();
           if(i == 0){
               cout<<curr->data<<" ";
           }
           if(curr->left != NULL)
                q.push(curr->left);
            if(curr->right !=NULL)
                q.push(curr->right);
       }
   }
}