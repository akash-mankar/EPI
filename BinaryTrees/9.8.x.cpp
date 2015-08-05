/*
Reconstruct a tree given inorder and post order traversal
in post order its alwats LR root
So last element of post order should be root.

// Variation of 9.8

Complexity is O (N^2)
*/

template <typename T>
shared_ptr<BinaryTree<T>> reconstruct_Binary_tree_helper(const vector<T> &in, const int &in_s, const int &in_e, const vector<T> &post, const int &post_s, const int &post_e)
{
	if(post_e > post_s && in_e > in_s)
	{
		auto it = find(in.cbegin()+ in_s, in.cbegin() +in_e, post[post_e -1]);
    auto left_subtree_size = distance(in.cbegin(), it) - in_s;

    return shared_ptr<BinaryTree<T>>(new BinaryTree<T>{
    post[post_e-1],
    // left subtree
    reconstruct_BinaryTree_helper(in, in_s, distance(in.cbegin(), it), post, post_s, post_s+left_subtree_size)

    // Build right subtree
    reconstruct_BinaryTree_helper(in, distance(in.cbegin(), it) + 1, in_e, post, post_s+left_subtree_size, post_e -1);
    });

    }
    return nullptr;
}

template <typename T>
shared_ptr<BinaryTree<T>> reconstruct_Binary_tree(const vector<T> &in, const vector<T> &post)
{
	   return reconstruct_Binary_tree_helper(in, 0, in.size(), post, 0, post.size());
}
