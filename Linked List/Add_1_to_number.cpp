 #include "codeblock.h"
 
 Node *newNode (int data){
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    return temp;
}
Node *reverse (Node *head)
{
    Node *curr = head;
    Node *nextNode,*prev;
    nextNode = prev = NULL;
    
    while(curr != NULL){
        nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    
    return prev;
}
Node* addOneHelper (Node *head)
{
    Node *res = head;
    Node *temp;
    
    int carry = 1;
    int sum = 0;
    
    while(head != NULL){
        sum = carry + head->data;
        
        carry = (sum >= 10) ? 1:0;
        
        sum = sum %10;
        
        head->data = sum;
        
        temp = head;
        
        head = head->next;
    }
    
    if(carry > 0){
        temp->next = newNode(carry);
    }
    
    return res;
}
Node* addOne(Node *head) 
{
    // Your Code here
    head = reverse(head);

    head = addOneHelper(head);
    
    return reverse(head);
    // return head of list after adding one
}
int main()
{
    Node* head = input();
    head = addOne(head);
    print(head);
}