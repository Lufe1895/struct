void reversePrint(SinglyLinkedListNode* head) {
	
	SinglyLinkedListNode *p; 
	p=head; 
	if(p==NULL){
		return; 
	} 
	reversePrint(p->next);
	printf("%d\n",p->data);
	
}
