template <typename T>
shared_ptr<node_t<T>> has_cycle(const shared_ptr<node_t<T>> &head)
{
	shared_ptr<node_t<T>> slow = head;
	shared_ptr<node_t<T>> fase = head;

	while(slow && slow->next && fast && fast->next && fase->next->next)
	{
		slow = slow->next;
		fast =  fast->next->next;
		if(slow == fast)
		{
			// found cycle
			int cycle_len = 0;
			do
			{
				cycle_len++;
				fast = fast->next;
      }while(slow!=fast);

      fast = head;
      while(cycle_len--)
      {
      	fast = fast->next;
      }

      slow = head;
      while(slow != fast)
      {
      	slow = slow->next;
      	fast = fast->next;
      }
      return slow;
    }
  }
  return nullptr;
}
