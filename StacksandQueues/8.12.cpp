/*
	Implement a queue using 2 stack and O(1) additional storage.

	Hint:
	in the below approach, technically we can store 2n-1 elements but
	we cannot guarantee more than n elements because if there are n+1
	enqueues without a dequeue stack A should overflow and we should
	not enqueue on stack B.
*/

template <typename T>
class Queue
{
	private:
		_size;
		_count = 0;
		stack<T> _A, _B;
	public:
	Queue(const size_t &size) : _size(size)
	{
  }

	void enqueue(const T &x)
	{
		if(_count == _size)
			throw length_error(“Queue is full”);

		_A.push(x);
		_count++;
  }

  T dequeue()
  {
  	while(!_A.empty())
  	{
  		_B.emplace(_A.top());
  		_A.pop();
    }
    if(!_B.empty())
    {
    	T e = _B.top();
    	_B.pop();
    	--count;
    	return e;
    }
    else
    	throw length_error(“Nothing to dequeue”);
    }
  }
};
