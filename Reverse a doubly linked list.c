DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
	DoublyLinkedListNode* current =head; DoublyLinkedListNode* temp ;
	
	if(!head){
		return head;
	}
	while(current->next!=NULL){
		temp=current->next;
		current->next=current->prev;
		current->prev=temp;
		current=temp;
	}
	current->next =current->prev;
	current->prev=NULL;
	head = current;
	return head;
}
