#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    if(head == NULL){
        return 0;
    }

    node* fast = head->next;
    node* slow = head;

    while(slow && fast){
        if(fast == slow){
            return 1;
        }

        if(fast->next == NULL){
            return 0;
        }
        
        fast = fast->next->next;
        slow = slow->next;
    
    }

    return 0;
}