SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
	
	struct SinglyLinkedListNode *tmp = NULL;
	if(position == 0)
	{
		tmp = head;
		head = tmp->next;
		free(tmp);
	}
	else
	   if(position == 1)
	{
		tmp = head->next;
		head->next = tmp->next;
		free(tmp);
	}
	   else{
		   struct SinglyLinkedListNode *tofree = NULL;
		   tmp = head;
		   
		   for(size_t i = 0; i < (position - 1); i++){
			   tmp = tmp->next;
		   }
		   tofree = tmp->next;
		   if(tofree->next == NULL){
			   tmp->next = NULL;
			   
		   }else{
			   tmp->next = tofree->next;
		   
		   free(tofree);
		   tofree = tmp = NULL;
		   }
		   
	    }
	   return head;
	}
