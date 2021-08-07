#include "codeblock.h"

Node* reverse(Node *head){
    Node *temp, *newNode;
    temp = newNode = NULL;

    while(head){
        newNode = head->next;
        head->next = temp;
        temp = head;
        head = newNode;
    }

    return temp;
}

Node* deleteNodeOnRight (Node *head){
    head = reverse(head);
    Node *curr = head;
    Node *maxSoFar = head;
    Node *temp = NULL;
    
    while(curr != NULL && curr->next != NULL){
        if(curr->next->data < maxSoFar->data){
            temp = curr->next;
            curr->next = temp->next;
            delete temp;
        }else{
            curr = curr->next;
            maxSoFar = curr;
        }
    }

    return reverse(head);
}


int main()
{
    Node *head = input();
    head = deleteNodeOnRight(head);
    print(head);
    return 0;
}