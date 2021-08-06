#include "codeblock.h"

Node* mergeTwoSortedLists ( Node *first , Node *second){
    if(first == NULL){
        return second;
    }else if (second == NULL){
        return first;
    }

    Node *temp = new Node(0);
    Node *res = temp;
    
    while(first != NULL && second != NULL){
        if(first->data <= second->data){
            temp->bottom = first;
            first = first->bottom;
        }else{
            temp->bottom = second;
            second = second->bottom;
        }
        temp = temp->bottom;
    }

    if(first != NULL){
        temp ->bottom = first;
    }else{
        temp ->bottom = second;
    }

    return res->bottom;
}

Node* flatten (Node *root){
    if(root == NULL || root->next == NULL){
        return root;
    }
    root->next = flatten(root->next);

    root = mergeTwoSortedLists(root, root->next);

    return root;
}
