SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
	
	if (!head) {
		return head;
	}
	SinglyLinkedListNode* res = head;
	while (head->next) {
		if (head->next->data == head->data) {
			head->next = head->next->next;
		}
		else {
			head = head->next;
		}
	}
	return res;
	
}
