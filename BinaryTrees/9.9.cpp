/*
Reconstruct a unique tree from preorder traversal with a marker for no children as null

Here when pushing on to stack we push right first and then left
hence while popping we could pop left first and the right.
this would be oppposite if we implment the same algorithm for a post order traversal
*/


template<typename T>
shared_ptr<BinaryTree<T>> reconstruct_tree(const vector<BinaryTree<T> &pre)
{
	stack<shared_ptr<BinaryTree<T>>> s;

  (for auto it = pre.crbegin(); it != pre.crend(); ++it)
  {
  	if(!(*it))
  	{
  		s.emplace(nullptr);
    }
    else
    {
    	shared_ptr<BinaryTree<T>> l = s.top();
    	s.pop();
    	shared_ptr<BinaryTree<T>> r = s.top();
    	s.pop();
    	s.emplace(new BinaryTree<T>{(*it)->data, l, r});
    }
  }
  return s.top();

}
