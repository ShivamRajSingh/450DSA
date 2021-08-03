Node * removeDuplicates( Node *head) 
{
    unordered_set <int> s;
    Node* temp = head;
    Node *prev = NULL;
    // while(temp!=NULL){
    //     s.insert(temp->data);
    // }
    // temp = head;
    
    while(temp != NULL ){
        if(s.find(temp->data) != s.end()){
            prev->next = temp->next;
        }else{
            s.insert(temp->data);
            prev = temp;
        }
        temp = temp->next;
    }
    
    return head;
}
int main()
{
    Node* head = input();
    head = removeDuplicates(head);
    print(head);
}