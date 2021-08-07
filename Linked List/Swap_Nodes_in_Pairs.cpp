#include "codeblock.h"

 Node* swapPairs(Node* head) {
    if(head == NULL || head->next == NULL)
        return head;
    
    Node *curr,*prev;
    
    curr = head->next->next;
    prev = head;
    head = head->next;
    head->next = prev;
    
    while(curr != NULL && curr->next != NULL){
        prev->next = curr->next;
        prev = curr;
        Node *nextNode = curr->next->next;
        curr->next->next = prev;
        curr = nextNode;
    }
    prev->next = curr;
    
    return head;
}
int main ()
{
    Node *head = input();
    head = swapPairs(head);
    print(head);
    return 0;
}