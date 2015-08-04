/*
Implement circular queue API with array and dynamic resizing
_tail always points to an index (last element + 1)

// Alternate approach
May eliminate _count variable
In that case _tail - _head should give the count.
But then we can't dynamically resize the array based on _tail - _head.
since it doesn;t necessarily mean we have reched array size or we haven't. 
*/

template <typname T>
class Queue
{
	Queue(const size_t &_size):_data({_size})
	{
	}

void enqueue(const T &x)
{
	if(_data.size() ==  _count)
	{
		// Align the vector straight;
		rotate(_data.begin(), _data.begin()+_head, _data.end());
		_head = 0; _tail = _count;
		// amortized doubling
		_data.resize(_data.size() << 1);
  }
  _data[_tail] = x;
  _tail = (_tail + 1)% _data.size();
  ++_count;
}

T dequeue()
{
	if(_count)
	{
		T ret = _data[head];
		_count--;
		_head = (_head+1)%_data.size();
		return ret;
  }
  else throw length_error(“Queue is Empty”);
}


	private:
		int _head=0;
		int _tail=0;
		int _count = 0;
		vector<T> _data;
};
