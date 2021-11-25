SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* node = new SinglyLinkedListNode(data);
    SinglyLinkedListNode* res = llist;
    
    for(int i=0;i<position-1;i++){
        llist = llist->next;
    }
    
    node->next = llist->next;
    llist->next = node;
    
    return res;

}
