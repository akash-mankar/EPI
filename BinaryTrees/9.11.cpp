/*
Print exterior nodes on a binary tree.

Algorithm:
print Root,
then traverse left subtree to print left boundary nodes.
then print leaf nodes from left to right of left subtree.
then print leaft nodes from left to right of right subtree
then print right boundary nodes
*/

template <typname T>
void left_boundary_traverse(const shared_ptr<BinaryTree<T> &n, bool isBoundary)
{
	if(n)
	{
		// Either boundary or leaf node
		if(isBoundary || (!n->left && !n->right))
		{
			cout << n->data << endl;
    }
    left_Boundary_traverse(n->left, isBoundary);
    // when traversing a right child in left subtree, make sure left child doesn’t exist,
    // then only it can be considered a boundary node otherwise its not. However it can
    // turn out to be a leaf node in which case we will print it anyway as shown above.
    left_Boundary_traverse(n->right, (isBoundary && !n->left));
  }
}

template <typname T>
void right_boundary_traverse(const shared_ptr<BinaryTree<T> &n, bool isBoundary)
{
	if(n)
	{
		// Go to left node only if there is no right node in which case it could be a boundary node
		right_boundary_traverse(n->left, isBoundary && !n->right);
		right_boundary_traverse(n->right, isBoundary);
		// Either boundary or leaf node
		if(isBoundary || (!n->left && !n->right))
		{
			cout << n->data << endl;
    }
  }
}


template <typename T>
void exterior_print_nodes(const shared_ptr<BinaryTree<T>> &root)
{
	if(root)
	{
		cout << root->data << endl;
		left_boundary_traverse(root->left, true);
		right_boundary_traverse(root->right, true);
  }
}
