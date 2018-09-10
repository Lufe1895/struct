
int getNode(SinglyLinkedListNode* head, int positionFromTail) {
	
	SinglyLinkedListNode *p = head;
	while(head) {
		if(positionFromTail < 0) p = p->next;
		positionFromTail--;
		head = head->next;
	}
	return p->data;
	
}
