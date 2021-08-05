#include "codeblock.h"

Node* middleNode(Node* head) {
    Node *slow, *fast;
    slow = fast = head;
    
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    
    return slow;
}

int main ()
{
    Node *head = input();
    Node *res = middleNode(head);
    print(res);
    return 0;
}