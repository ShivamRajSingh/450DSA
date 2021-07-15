#include "codeblock.h"

Node* reverseKGroups(Node *head, int k)
{
    Node *prev,*next,*curr;
    curr = head;
    next = prev = NULL;

    int count = 0;
    while(curr != NULL && count < k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if(head != NULL){
        head->next = reverseKGroups(next,k);
    }

    return prev;
}

Node* reverseKGroupsExactly(Node *head, int k)
{
    Node *prev,*next,*curr;
    curr = head;
    next = prev = NULL;

    int count = 0;
    int nodes = 0;
    Node *temp = head;
    while(temp != NULL){
        nodes++;
        temp = temp->next;
    }
    while(curr != NULL && count < k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    nodes -= k;

    if(next != NULL){
        if(k <= nodes){
            Node* remainingGroups = reverseKGroupsExactly(next,k);
            head->next = remainingGroups;
        }else{
            head->next = next;
        }
    }

    return prev;
}

int main()
{
    Node* head = input();
    cout << "Enter the sizes in which you want to reverse : ";
    int k;
    cin >> k;
    // head = reverseKGroups(head,k);
    // print(head);
    head = reverseKGroupsExactly(head,k);
    print(head);
    return 0;
}