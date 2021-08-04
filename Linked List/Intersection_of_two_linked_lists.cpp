#include "codeblock.h"

void findIntersection (Node *l1, Node *l2)
{
    int nodes1, nodes2;
    Node* temp1 = head1;
    Node* temp2 = head2;
    
    nodes1 = 0;
    while(temp1 != NULL){
        nodes1++;
        temp1 = temp1->next;
    }
    
    nodes2 = 0;
    while(temp2 != NULL){
        nodes2++;
        temp2 = temp2->next;
    }
    temp1 = head1;
    temp2 = head2;
    
    int diff = abs(nodes1- nodes2);
    
    if(nodes1 > nodes2){
        while(diff--){
            temp1 = temp1->next;
        }
    }else{
        while(diff--){
            temp2 = temp2->next;
        }
    }
    
    while(temp1 != temp2){
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    
    return temp1;
}


int main()
{
    Node* l1 = input();
    Node* l2 = input();
    findIntersection(l1,l2);
    return 0;
}