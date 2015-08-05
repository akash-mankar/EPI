/*
Return successor of a node in binary tree.
Successor is generally the inorder successor
every node has a parent field.
parent of the root is null
*/

template <typename T>
shared_ptr<BinaryTree<T>> findsuccessor(const shared_ptr<BinaryTree<T>> &n)
{
	if(!n)
	 return nullptr;

	// search in the left of right subtree
	if(n->right)
	{
		n = n->right;
		while(n->left);
			n = n->left;

		return n;
}

// no right child
// then search in the parent link;
// Keep searching until you find a parent node which is left child of its parent;
while(n->parent && n->parent->right == n)
{
	n = n->parent;
}

return n->parent; // could be Null if we eventually reached root
			  // which just means there is no successor.
}
