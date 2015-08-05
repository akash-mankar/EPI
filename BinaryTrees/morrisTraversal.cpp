/*
Morris Traversal is a recursive inorder traversal of the tree just like others.
But in a normal recursive traversal you can end up taking a O(h) additional space on system stack.
h being the heigh of binary Tree
in Morris traversal you only take O(1) additional space but at the cost you end up modifying the tree structure tempararily.

Take an example tree and traverse through it to understand the algorithm easily.
*/

template <typename T>
void morris_inorder_traversal(shared_ptr<BinaryTree<T>> n)
{
  while(n)
  {
    if(n->left)
    {
        shared_ptr<BinaryTree<T>> pre = n->left
        if(pre->right && pre->right != n) // pre->right will be equal to root(n) of the subtree only if we have modified it.
        {
          pre = pre->right;
        }
        if (pre->right) { // condition where pre->right = n
            pre->right = nullptr;
            cout << n->data << endl;
            n = n->right;
        }
        else
        {
          pre->right = n; // modified the right node to point to root(n) of the subtree.
          n = n->left;
        }
    }
    else
    {
      cout << n->data << endl;
      n = n->right; // we know right exists because we modified it earlier to point to root (n) of that particular subtree.
    }
  }
}
