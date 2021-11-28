DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    if(llist==nullptr || llist->next==nullptr){
        return llist;
    }
    
    DoublyLinkedListNode *reversed_list = reverse(llist->next);
    
    llist->next->next = llist;
    llist->prev = llist;
    llist->next = nullptr;
    
    return reversed_list;
    
    
}
