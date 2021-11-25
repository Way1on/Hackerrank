SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {

    SinglyLinkedListNode* node = new SinglyLinkedListNode(data);
    node->data = data;
    node->next = NULL;
    
    if(head == NULL)
        return node;
    
    SinglyLinkedListNode* last = head;
    while(last->next!=NULL){
        last = last->next;
    }
    last->next = node;
    
    return head;
    
}
