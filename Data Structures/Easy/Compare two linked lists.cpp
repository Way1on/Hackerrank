bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    while(head1 != NULL and head2 != NULL){
        if (head1->data != head2->data){
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;        
    }
    if((head1!=NULL and head2==NULL) or (head2!=NULL and head1==NULL))
        return false;
    
    return true;

}
