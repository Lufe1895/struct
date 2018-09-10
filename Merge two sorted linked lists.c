SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
	
	SinglyLinkedListNode* n,*p;
	if (head1->data > head2->data)
	{
		n = head2;
		head2 = head2->next;
	}
	else
	{
		n = head1;
		head1 = head1->next;
	}
	p = n;
	while(head1!=NULL && head2!=NULL)
	{
		if(head1->data > head2->data)
		{
			n->next = head2;
			head2 = head2->next;           
		} 
		else if(head1->data <= head2->data)
		{
			n->next = head1;
			head1 = head1->next;               
		}
		n = n->next;     
	}
	if(head1 == NULL)
		  n->next = head2;
	else
		n->next = head1; 
	return p;
	
}
