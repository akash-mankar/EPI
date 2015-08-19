int partition(vector<int> &A, int &l, int &r, int &pivot)
{
	int largest = l;
	int pivot_value = A[pivot_value];

	swap(A[r], A[pivot]);

	for(int i = l, i< r; i++)
	{
		if(A[i] > pivot_value)
		{
			swap[A[i], A[largest]);
			largest++;
    }
  }
  swap(A[largest], A[r]);
  return largest;
}

int find_kth_largest(vector<int> &A)
{
	int l = 0
	int r =  A.size()-1;

	while(l<=r)
	{
		default_random_engine gen(random_device());
		uniform_int_distribution dis(l,r);
		int p = partition(A, l, r, dis(gen));
		if((p == k-1)
			return A[p];
		else if(p >k-1)
		{
			l = p-1;
    }
    else
    {
    	r = p+1;
    }

  }
  return A[l];
}
