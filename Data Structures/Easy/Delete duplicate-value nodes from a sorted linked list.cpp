
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode *res = llist, *value_head = llist;
    int value = llist->data;
    
    while(llist->next != NULL){
        llist = llist->next;
        if(value!=llist->data){
            value = llist->data;
            value_head->next = llist;
            value_head = value_head->next;
        }
    }
    value_head->next = NULL;
    
    return res;
    
}
