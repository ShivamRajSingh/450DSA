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
Node* reverse(Node *head){
    
    Node *curr = head;
    Node *next = NULL;
    Node *prev = NULL;
    
    
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    
    return prev;
    
}
bool isPalindrome(Node *head)
{
    
    Node *middle = middleNode(head);
    middle = reverse(middle);
    
    while(middle != NULL){
        if(head->data != middle->data){
            return false;
        }
        middle = middle->next;
        head = head->next;
    }
    
    return true;
}
int main ()
{
    Node *head = input();
    cout << isPalindrome(head);
    return 0;
}