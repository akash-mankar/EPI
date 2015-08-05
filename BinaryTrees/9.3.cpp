/*
Check if a binary is symmetric or not

*/

template <typename T>
bool isSymmetricHelper(const shared_ptr<BinaryTree<T>> &l,
				 const shared_ptr<BinaryTree<T>> &r)
{
	if(!l && !r)
		return true;
	else if( (!l && r) || (l && !r))
		return false;
	else  // (l && r)
		return (l->data == r->data) &&  isSymmetricHelper<T>(l->left, r->right) && isSymmetricHelper<T>(l->right, r->left);

}

template <typename T>
bool isSymmetric(const shared_ptr<BinaryTree<T>> &n)
{
	return (!n || isSymmetricHelper<T>(n->left, n->right));
}
