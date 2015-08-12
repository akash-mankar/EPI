/*
Approximate Sort
Data is almost sorted and each number is at most k positions away from its correctly sorted position

Algorithm:
Keep a min heap of k+1 elements.
That means for an element at the top,  k greater elements have already arrived and all smaller number that it are already written
time to write min_heap.top();
*/

template <typename T>
void approximate_sort(istringstream &sin, const int &k)
{
	priority_queue<T, vector<T>, greater<T>> min_heap;
	T x;
  for(int i =0; i< k && sin >> x; ++i)
	{
		min_heap.push(x);
  }

  while(sin >> x)
  {
  	min_heap.push(x); // k+1 elements
    cout << min_heap.top() << endl;
    min_heap.pop(); // k elements again ready for a new one.
  }

  while(!min_heap.empty())
  {
  	cout << min_heap.top() << endl;
  	min_heap.pop();
  }

}
