#include "codeblock.h"

Node *removeDuplicates(Node *head)
{
     Node* temp = head;
     
     while(temp != NULL && temp->next != NULL){
         if(temp->data == temp->next->data){
             temp->next = temp->next->next;
         }else{
            temp = temp->next;    
         }
     }
    //  if(temp->data == temp->next->data){
    //          temp->next = NULL;
    //  }
     return head;
}

int main()
{
    Node* head = input();
    head = removeDuplicates(head);
    print(head);
}