SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
	
	if (head == NULL || head->next == NULL) {
		return head;
	}
	
	SinglyLinkedListNode* nextNode = head->next;
	head->next = NULL;
	SinglyLinkedListNode* newHead = reverse(nextNode);
	nextNode->next = head;
	return newHead;  
	
}
