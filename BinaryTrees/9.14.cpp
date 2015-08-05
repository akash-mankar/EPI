/*
template <typename T>
struct BinaryTree
{
	T data;
	shared_ptr<BinaryTree<T>> left;
	shared_ptr<BinaryTree<T>> right;
}
*/

/*
2*(max(da-db)) -dl)
O(max(da-dl), max(db-dl)) time complexity

*/
template <typename T>
shared_ptr<BinaryTree<T>> fastLCA(shared_ptr<BinaryTree<T>> a, shared_ptr<BinaryTree<T>>b)
{
	unorderd_set<shared_ptr<BinaryTree<T>>> hash;
	while(a || b)
	{
		if(a)
		{
			if(hash.emplace(a).second == false)
				return a;

			a = a->parent;
    }
    if(b)
    {
    	if(hash.emplace(b).second == false)
    		returb b;

    	b = b->parent;
    }
  }
    throw invalid_argument(“No common ancesotr”);
}
