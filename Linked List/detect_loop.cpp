#include "codeblock.h"

Node *detectCycle(Node *head) {
    Node* slow,*fast;
    slow = fast = head;
    
    bool loopExist = false;
    while(slow && fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        
        if(slow == fast){
            loopExist = true;
            break;
        }
    }
    
    if(loopExist){
        slow = head;
        
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        
        return slow;
    }
    
    return NULL;
}
int main()
{
    Node* head = input();
    cout << detectCycle(head);
    return 0;
}
