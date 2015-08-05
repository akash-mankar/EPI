/*
LCA of two nodes in a binary tree with a parent pointers
target O(1) space, O(h) time
this is critical because if we were to use recursion we know in worst case we would have O(h) space on system stack.
so lets not use recursion.
Now depth of nodes a and b can be calculated in O(h) time and then we could use depth to calculate LCA in O(1) time.
*/

template <typename T>
int calculateDepth(const shared_ptr<BinaryTree<T>> &n)
{
	int depth = 0;
	while(n)
  {
    ++depth;
    n = n->parent;
  }
  return depth;
}
template <typename T>
shared_ptr <BinaryTree<T>> LCA(shared_ptr<BinaryTree<T>> a,
					   shared_ptr<BinaryTree<T>> b)
{
	if(!a || !b)
		return nullptr;

	int a_d = calculateDepth(a);
	int b_d = calculateDepth(b);

	int diff = abs(a_d -b_d);

	if(b_d > a_d)
	{
		swap(a, b);
	}

  while(diff)
	{
		a = a->parent;
		--diff;
  }

  while(a != b)
  {
  		a = a->parent;
  		b = b->parent;
  }
  return a;
}
