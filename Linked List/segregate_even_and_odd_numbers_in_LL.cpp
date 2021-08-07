 #include "codeblock.h"
 
 Node* divide(Node *head){
    Node *es,*ee,*os,*oe;
    es = ee = os = oe = NULL;
    
    Node *curr = head;
    
    int num;
    while(curr!= NULL){
        num = curr->data;
        
        if(num % 2 == 0){
            if(es == NULL){
                es = ee = curr;
                // ee = ee->next;
            }else{
                ee->next = curr;
                ee = ee->next;
            }
        }else{
            if(os == NULL){
                os = oe = curr;
                
            }else{
                oe->next = curr;
                oe = oe->next;
            }
        }
        curr = curr->next;
    }
    
    if(os == NULL || es == NULL){
        return head;
    }
    
    ee->next = os;
    oe->next = NULL;
    
    return es;
}

int main ()
{
    Node *head = input();
    head = divide(head);
    print(head);
    return 0;
}