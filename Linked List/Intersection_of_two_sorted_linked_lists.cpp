#include "codeblock.h"

Node* findIntersection(Node* head1, Node* head2)
{
    Node *res = new Node();
    Node *temp = res;
    
    while(head1 != NULL && head2 != NULL){
        if(head1->data == head2->data){
            Node *newNode = new Node();
            newNode->data = head1->data;
            temp->next = newNode;
            head1 = head1->next;
            head2 = head2->next;
            temp = temp->next;
        }else if (head1->data < head2->data){
            head1 = head1->next;
        }else{
            head2 = head2->next;
        }
    }
    
    res = res->next;
    return res;
    
}
int main()
{
    Node *l1 = input();
    Node *l2 = input();

    Node *l3 = findIntersection(l1,l2);
    print(l3);

    return 0;
}