/*
iterative In order traversal with O(1) additional space.
Each node has a parent field
*/

template <typename T>
void inorderTraversal(const shared_ptr<BinaryTree<T>> &r)
{
	if(!r)
		return;

	shared_ptr<BinaryTree<T>> prev, curr = r, next;
	while(curr)
	{
		if(!prev || prev->right == curr || prev->left ==curr)
		{
			if(curr->left)
			{
				next = curr->left;
			}
else
{
cout << curr->data << endl;
next = curr->right? curr->right : curr->parent;
}
}else if(curr->left == prev) // we travelled left, now print root and travel right
{
	cout << curr->data << endl;
	next = curr->right? curr->right : curr->parent;
}
else // curr->right == prev
{
	// we travelled to right subtree too
	// L root R is complete, reuturn to parent of curr root.
	next = curr->parent
}
}
}
