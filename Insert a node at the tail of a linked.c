SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
SinglyLinkedListNode *temp = create_singly_linked_list_node(data);
temp->data=data;
temp->next=NULL;
	if(head==NULL){
		head=temp;
	}else{
		SinglyLinkedListNode *current=head;
		while(current->next!=NULL){
			current=current->next;
		}
		current->next=temp;
	}
	return head;
}
