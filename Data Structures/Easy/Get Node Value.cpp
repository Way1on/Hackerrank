int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    int n = 0;
    SinglyLinkedListNode *res = llist;
    
    while(llist!=NULL){
        llist = llist->next;
        if(n>positionFromTail){
            res = res->next;
        }
        n ++;
    }
    
    return res->data;
    
    
}
