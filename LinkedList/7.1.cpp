// MErge two sorted linked lists with only O(1) additional space

template <typename T>
void appendnode_and_advance(shared_ptr<node_t<T>> &head, shared_ptr<node_t<T>> &tail, shared_ptr<node_t<T>> &n)
{
  if(head)
  {
    tail->next = n;
  }else
  {
    head = n;
  }
  n =  n->next;
}

template <typename T>
shared_ptr<node_t<T>> merge_sorted_list(shared_ptr<node_t<T>> &F,
                                        shared_ptr<node_t<T>> &L)
{
    shared_ptr<node_t<T>> sorted_head = nullptr; tail = nullptr;

    while(F && L)
    {
      appendnode_and_advance(sorted_head,tail, F->data < L->data ? F : L);
    }
    while(F)
    {
      appendnode_and_advance(sorted_head,tail, F);
    }

    while(L)
    {
      appendnode_and_advance(sorted_head,tail, L);
    }
    return sorted_head;
}
