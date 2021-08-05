#include "codeblock.h"

 Node* removeNthFromEnd(Node* head, int n) {
        
    Node *curr,*nextNode;
    
    curr = nextNode = head;
    // n--;
    while(n--){
        nextNode = nextNode->next;
    }
    
    if(nextNode == NULL){
        return head->next;
    }
    
    while(nextNode ->next != NULL){
        curr = curr->next;
        nextNode = nextNode->next;
    }
    
    curr->next = curr->next->next;

    return head;
}
int main()
{
    Node *head = input();
    int n;
    cin >> n;
    head = removeNthFromEnd(head,n);
    print(head);

    return 0;
}