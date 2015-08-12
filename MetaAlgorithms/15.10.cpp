// searching for a sequence in 2D array

// MY approach
// No edge cases
// brute force algorithm
// no error checking.
// no printing of elements

template<typename T>
bool search_helper(vector<vector<T>> &A, int i, int j, vector<T> &S, int k)
{		if(k == S.size())
		{
			return true;
    }

		if(A[i][j+1] == S[k])
		{
			return search_helper(A, i, j+1, S, k+1)
    }
    else if(A[i+1][j] == S[k]
    {
    	return search_helper(A, i+1, j, S, k+1);
    }
    else if(A[i-1][j] == S[k]
    {
    	return search_helper(A, i-1, j, S, k+1);
    }
    else if(A[i][j-1] == S[k]
    {
    	return search_helper(A, i, j-1, S, k+1);
    }
}

template<typename T>
void searchsequencein2Darray(vector<vector<T>> &A, vector<T> &S)
{
	int numRows = A.size();
	int numColumns =  A[0].size();

	for( int  i = 0;  i < numRows ; i++)
	{
		for(int j=0; j < numColumns;  j++)
		{
			if(A[i][j] == S[0])
			{
				bool b = search_helper(A, i, j, S, 1);
			}
    }
  }
}


// EPI implementation
// basic changes:
// Need a cache to maintain a set of indices which have already been visited.


class HashTuple
{
	public:
	size_t operator()(const tuple<int,int,int> &t) const
	{
		return hash<int>(get<0>(t)) ^ hash<int>(get<1>(t) ^ hash<int>(get<2>(t)));
  }
};

template<typename T>
bool search_helper(vector<vector<T>> &A, int i, int j, vector<T> &S, int k,
   unordered_set<tuple<int, int,int>, HashTuple> cache)
{		if(k == S.size())
		{
			return true;
    }

    // bounds checking
    if(i < 0 || i >= A.size() || j < 0 || j >= A[i].size() ||
       cache.find({i,j,k}) != cache.end())
    {
    	return false;
    }

		if(A[i][j] == S[k] &&
			(search_helper(A, i-1, j, S, k+1) ||
			search_helper(A, i+1, j, S, k+1) ||
			search_helper(A, i, j-1, S, k+1) ||
			search_helper(A, i, j+1, S, k+1)))
		{
			return true;
    }

    cache.insert({i,j,k});
    return true;
}

template<typename T>
void searchsequencein2Darray(vector<vector<T>> &A, vector<T> &S)
{
	unordered_set<tuple<int,int,int>, HashTuple> cache;
	int numRows = A.size();
	int numColumns =  A[0].size();

	for( int  i = 0;  i < numRows ; i++)
	{
		for(int j=0; j < numColumns;  j++)
		{
			if(search_helper(A, i, j, S, 0, cache))
			  return true;
    }
  }
  return false;
}
