/*
running median of an incoming sequence
*/

template <typename T>
void printrunning_median(istringsteam &sin)
{
	// minheap
	priority_queue< T, vector<T>, greater<T>> MN;
	// maxheap
	priority_queue<T, vector<T>, less<T>> MX;

	while(sin >> x)
	{
		if(!MX.empty() && x > MX.top()
		{
			MN.emplace(x);
    }
    else
    {
    	MX.emplace(x);
    }

    if(MN.size() > MX.size()+1)
    {
    	MX.emplace(MN.top());
    	MN.pop();
    }else if(MX.size() > MN.size()+1)
    {
    	MN.emplace(MX.top());
    	MX.pop();
    }

    if(MN.size() == MX.size())
     	cout << 0.5 * (MX.top() + MN.top) << endl;
    else
    	cout << MX.size() > MN.size() ? MX.top() : MN.top() << endl;
  }
}
