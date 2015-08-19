// Has 2 sum:

bool has_2_sum(vector<int> &A, int t)
{
	int j = 0; k = A.size()-1;

	while(j<k)
	{
		if(A[j]+A[k] == t)
			return true;
		else if(A[j] + A[k] < t)
			j++;
		else     // A[j] + A[k] > t
			k--;
	}

	return false;
}

bool has_3_sum(vector<int> &A, int t)
{
	for(int i = 0; i < A.size()-2; i++)
	{
		int l = i+1;
		int r = A.size();
		if(A[i]+A[l]+A[r] == t)
			return true;
		else if (A[i]+A[l]+A[r] < t)
			l++;
		else
			r--;
  }
}

// Note that we didn’t call has2_sum from has_3_sum with sum = t - A[i]
// if we had done that our implementation of has_2_sum would have reconsidered use of A[i].
// Modify has_2_sum if you wish to reuse it.
