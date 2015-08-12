/*
k-th Largest element of a streaming sequence

For first K elements return smallest element
*/

template <typename T>
void output_kth_largest_element(istringstream &sin, const int &k)
{
	priority_queue<T, vector<T>, greater<T>> min_heap;
	T x;
	for(int i =0; i< k && sin >> x; i++)
	{
		min_heap.emplace(x);
		cout << min_heap.top() << endl;
  }

  while(sin >> x)
  {
  	if(min_heap.top() < x) // very subtle, either this or >=
  					// just > won’t work. Think aboutit.
  	{
  		min_heap.pop();
  		min_heap.emplace(x);
    }
    cout << min_heap.top() << endl;
  }
}
