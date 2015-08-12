// Longest non decreasing subsequence:
// Algorithm:
/*
input vector<T> &A
ifA[i] > A[j]
	si = max( max(0, i-1)(sj+1 if A[j] <= A[i], 1) , 1);

*/
// 3, 4, -5, 6


// O(n^2) solution

template <typename T>
vector<T> longest_nondecreasing_subsequence(vector<T> &A)
{
	if(A.empty())
		return A;

	vector<int> longest_len(A.size(), 1);
	vector<int> previous_index(A.size(), -1) ; // required if we want to keep track of sequence
	int max_len_idx = 0; // maximum length idx of the longest subsequence

	for(int i = 1;  i< A.size();  i++)
	{
		for(int j = 0 ;  j < i ; j++)
		{
			if(A[i] >= A[j] && longest_len[j]+1 > longest_len[i] )
      {
      	longest_len[i] = longest_len[j]+1;
      	previous_index[i] = j;
      }
    }
    if(longest_len[i] >longest_len[max_len_idx])
    {
    	max_len_idx = i;
    }
  }


  // Build the return vector
  int max_length =  longest_length[max_len_idx];
  vector<T> ret(max_length);

  while(max_length > 0)
  {
  	ret[max_length] = A[max_len_idx];
  	--max_length;
  	max_len_idx = previous_index[max_len_idx];
  }
  return ret;
}

//O(nlogn) solution
// writing it as I understand it.
// Take the input array I.
// make a new array T, empty initially.
// traverse over I. if an element > I is not found in T then put I element in T.
// simply follows like this, if T has 3,4,6 and element in I is 7. then it makes sense to append itin T because it will still be increasing subsequence.
// otherwise find the first greater,(if I = 2, in above case T[0] =3;
// and replace it with I’s element.
// as you can see resulting array T = 2,4,6 is still longest increasing,
// eventually return size of T.

template <typename T>
int longest_nondecreasing_subsequence(vector<T> &A)
{
	vector<T> tail_values;
	for(const T &a: A)
	{
		auto it = upper_bound(tail_values.begin(), tail_values.end(), a);
		if( it == tail_values.end())
		{
			tail_values.emplace_back(a);
    }
    else
    {
    	*it = a;
    }
  }
  return tail_values.size();
}
