SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    
    SinglyLinkedListNode* head = llist;
    
    if(position == 0){
        head = llist->next;
        return head;
    }
    
    for(int i=1;i<position;i++){
        llist = llist->next;
    }
    llist->next = llist->next->next;
    
    return head;
    
}
