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

Node* addTwoLists(Node* l1, Node* l2)
{
   l1 = reverse(l1);
    l2 = reverse(l2);
    
    Node *dummy = new Node();
    
    Node* temp = dummy;
    
    int carry = 0;
    int sum = 0;
    
    while(l1!= NULL || l2 != NULL || carry){
        sum = 0;
        
        if(l1 != NULL){
            sum += l1->data;
            l1 = l1->next;
        }
        
        if(l2 != NULL){
            sum += l2->data;
            l2 = l2->next;
        }
        sum += carry;
        
        carry = sum/10;
        
        sum = sum % 10;
        
        Node* newNode = new Node();
        newNode->data = sum;
        temp->next = newNode;
        temp = temp->next;
    }
    dummy = dummy->next;
    
    dummy = reverse(dummy);
    
    return dummy;
}
int main()
{
    Node *l1 = input();
    Node *l2 = input();

    Node *l3 = addTwoLists(l1,l2);
    print(l3);

    return 0;
}