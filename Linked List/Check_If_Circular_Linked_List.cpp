#include "codeblock.h"

bool isCircular(Node *head)
{
    
   if(head == NULL){
       return true;
   }
   
   Node *temp = head->next;
   
   while(temp != head && temp!= NULL){
       temp = temp->next;
   }
   
   return temp == head;
}

int main ()
{
    Node *head = input();
    cout << isCircular(head);
    return 0;
}