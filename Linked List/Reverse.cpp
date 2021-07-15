#include "codeblock.h"


Node* recursiveReverse(Node *head){
    if(head == NULL){
        return NULL;
    }

    if(head->next == NULL){
        return head;
    }

    Node* secondElement = head->next;
    head->next = NULL;
    Node *reverseRest = recursiveReverse(secondElement);
    secondElement->next = head;
    return reverseRest;
}

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

int main()
{
    Node *head = input();
    print(head);
    // head = reverse(head);
    head = recursiveReverse(head);
    cout << "After Reversing : ";
    print(head);
    return 0;
}