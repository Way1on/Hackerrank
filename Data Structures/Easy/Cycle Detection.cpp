bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *turtoise = head;
    SinglyLinkedListNode *hare = head;
    
    while(hare->next!=nullptr && hare->next->next!=nullptr){
        turtoise = turtoise->next;
        hare = hare->next->next;
        
        if(turtoise==hare){
            return true;
        }
    }
    return false;
    
}
