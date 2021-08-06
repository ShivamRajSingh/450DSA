#include "codeblock.h"

Node* segregate(Node *head) {
        
    if(head == NULL || head->next == NULL)
        return head;
    
    Node *dummyZero = new Node (0);
    Node *dummyOne = new Node (0);
    Node *dummyTwo = new Node (0);
    
    Node *curr = head;
    
    Node *zero = dummyZero;
    Node *one = dummyOne;
    Node *two = dummyTwo;
    
    
    while(curr != NULL){
        if(curr->data == 0){
            zero ->next = curr;
            zero = zero->next;
            
        }else if (curr->data == 1){
            one ->next = curr;
            one = one->next;
        }else{
            two ->next = curr;
            two = two->next;
        }
        
        curr = curr->next;
    }
    
    if(dummyOne ->next != NULL){
        zero->next = dummyOne->next;
    }else{
        zero->next = dummyTwo->next;
    }
    
    one->next = dummyTwo->next;
    two->next = NULL;
    
    head = dummyZero->next;
    
    return head;
    
}
int main()
{
    Node* head = input();
    head = segregate(head);
    print(head);
}