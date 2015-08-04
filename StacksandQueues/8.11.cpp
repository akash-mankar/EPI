/*
Implement a queue using only two unsigned integer variables
One integer to hold number of elements in the queue.
Other integer storing sequence of elments in its value

4. log10() Gives you number of digits in a decimal number
e.g. log (100000) = 5, number of digits =  5 + 1 = 6;
*/

class Queue
{
	private:
	unsigned _size = 0;
	unsigned _val =  0;
	unsigned _max_size =floor(log10(numeric_limits<unsigned>::max());

	public:
		void enqueue(const int &x)
		{
			if(x < 0 || x > 9)
				throw std::invalid_argument(“Not allowed”);

			if(_size >= max_size)
				throw length_error(“maximum size reached”);
			else
			{
				_val = _val * 10 + x;
				_size++;
      }
    }

    unsigned dequeue()
    {
    	if(_size)
    	{
    		int d =  floor(log10(_val);
    		unsigned ret = 0;
    		// Case where the entire queue is only zeros
    		if(d+1 == _size)
    		{
    			// this won’t execute if entire queue is zeros
    			ret = _val/ pow(10.0, d);
    			_val =  _val -  pow(10.0, d)*ret;
        }
        return ret;
      }
    }

};
