/*
LCA of two nodes in a binary tree
if root is one of a and b , root is LCA
if both nodes lie in left subtree (or right subtree) their LCA lies in left subtree (or Right subtree). Or root is their LCA itself.
*/


template <typename T>
shared_ptr <BinaryTree<T>> LCA(const shared_ptr<BinaryTree<T>> &n,
					   const shared_ptr<BinaryTree<T>> &a,
					   const shared_ptr<BinaryTree<T>> &b)
{
	if(!n)
		return nullptr;
	else if(n==a || n==b)
	{
		return n;
  }

  auto l_res = LCA(n->left, a, b);
  auto r_res = LCA(n->right, a, b);

  if(l_res && r_res)
  {
  	return n;
  }
  else
      return l_res ? l_res : r_res;
}
