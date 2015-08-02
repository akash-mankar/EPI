/*
Design an alogrithm to sort a stack S in descending order.
You can’t use external space.

Solution: use recursion
*/

template <typename T>
void insert(stack<T> &s, T &e)
{
	if(s.empty() || s.top() <=e)
{
	s.push(e);
}
else
{
	T f = s.top();
	s.pop();
	insert(s, e);
	s.push(f);
}
}

template <typename T>
void sort_stack(stack<T> &s)
{
	while(!s.empty())
	{
		T e = s.top();
		s.pop();
		sort_stack(s);
		insert(s, e);
}
}
