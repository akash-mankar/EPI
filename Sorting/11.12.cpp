// Array unsorted

template <typename T>
pair<T,T> find_min_max(const vector<T> &A)
{
	if(A.size()<=1)
	{
		return{A.front(), A.front()};
  }

  pair<T,T> min_max_pair = std::minmax(A[0], A[1]);

  for(int i =2; i+1 < A.size(); i = i+2)
  {
  	pair<T, T>local_pair = minmax(A[i], A[i+1]);
  	min_max_pair={min(min_max_pair.first, local_pair.first),
  			   max(min_max_pair.second, local_pair.second)};
  }

  // if array size is odd , last elemnt is left uncompared
  if(A.size() & 1)
  {
  	min_max_pair={min(min_max_pair.first, A.back()),
  			   max(min_max_pair.second, A.back()};
  }
  return min_max_pair;
}
