SinglyLinkedListNode *newNode = create_singly_linked_list_node(data);
if (head == NULL || position == 0) {
	newNode->next = head;
	head = newNode;
	return newNode;
}
int i;
SinglyLinkedListNode *currentNode = head;
for(i=1;i<position;i++){
	currentNode = currentNode->next;
}
newNode->next = currentNode->next;
currentNode->next = newNode;

return head;
