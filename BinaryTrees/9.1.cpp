/*
Determining whether the tree is balanced or not.
// Maximum additional storage can be O(h)

We should check if
left subtree at node n is within +-1 node depth of right subtree at node n
Also we need to check if left subtree of node n is balanced in itself or not
and same for right subtree.

*/

// SOLUTION 1:
// In this solution
template <typename T>
int getheight(const shared_ptr<BinaryTree<T>> &n)
{
	if(!n)
	return -1;

	int lheight = getHeight(n->left);
	if(lheight == -2)
		return -2;

	int rHeight = getHeight(n->right);
	if(rHeight == -2)
		return -2;

	if(abs(rHeight - lHeight) > 1)
	{
		return -2;
}
return max(lHeight, rHeight) + 1;
}

template <Typename T>
bool isBalanced(const shared_ptr<BinaryTree<T>> &n)
{
	if(getheight(n) != -2)
	 return true;
	else
	 return false;
}


// Solution 2:
// This is not checking is a the tree is balanced or not.
// However it does check if the left subtree at n is within +-1 nodedepth of right subtree at n.


bool isBalanced(const shared_ptr<BinaryTree<T>> &n)
{
  shared_ptr<BinaryTree<T>> temp = n;
  // traverse left subtree
  int leftH = 0;
  if(temp->left)
  {
      ++leftH;
      temp = temp->left;
      while(temp)
      {
        if(temp->left)
        {
            ++leftH;
            temp = temp->left;
        }
        if(temp->right)
        {
            ++leftH;
            temp = temp->right;
        }
      }
  }

  shared_ptr<BinaryTree<T>> rightTemp = n;
  int rightH = 0;
  if(rightTemp->right)
  {
    ++rightH;
    rightTemp = rightTemp->right;
    while(rightTemp)
    {
      if(rightTemp->right)
      {
        ++rightH;
        rightTemp = rightTemp->right;
      }
      if(rightTemp->left)
      {
        ++rightH;
        rightTemp = rightTemp->left;
      }
    }
  }

  return (abs(rightH-leftH) <= 1) ? true : false;
}
