/*
Zig zag order traversal of a binary tree
I choose stack.
Also need to enter a new line after each level

Level order traversal can be implemented without zigzag using a queue
*/

// Non recursive solution.
template <typename T>
void print_zigzag_order(Node<T> &r)
{
	if(r == NULL)
		return;

	stack<Node<T>> currLevel;
	stack<Node<T>> nextLevel;

	currLevel.push(r);
	while(!currLevel.empty())
	{
		Node<T> e = currLevel.top();
		if(e.left)
			nextLevel.push(e.left);
		if(e.right)
			nextLevel.push(e.right);
		cout << e->data << “ “ ;
		currLevel.pop();

		if(currLevel.empty())
		{
			// going to next level
			cout << endl;
			swap(currLevel, nextLevel);
    }
  }

}


// Non recursive solution.
template <typename T>
void print_level_order(shared_ptr<Node<T>> &r)
{
	if(r == NULL)
		return;

	queue<shared_ptr<<Node<T>>> q;
	q.emplace(r);
	count = q.size();
	while(!q.empty())
	{

		if(q.front()->left)
			q.push(q.front()->left);
		if(q.front()->right)
			q.push(q.front()->right);
		cout << q.front()->data<< “ “ ;
		q.pop();
		count--;
		if(count == 0)
		{
			// going to next level
			cout << endl;
			count = q.size();
}
}

}
