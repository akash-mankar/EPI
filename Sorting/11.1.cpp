int checkfirst(int M, vector &A, int K)
{
	while(M >=0)
	{
		--M;
		if(A[M] != k)
		{
			return M+1;
    }
  }
  return M;
}

int search_first_occurence(int k, vector<int> &A)
{

  // A is sorted.
  // otherwise sort(A.begin(), A.end());

  int L = 0; U = A.size()-1;
  int M;

  while(L<=U)
  {
  	M =  L + ((U-L)>>2);
  	if(A[M] == k)
  	{
  		return checkfirst(M, A, k);
  }
  else if(A[M} < K)
  {
  	L = M+1;
  }
  else
  {
  	U = M-1;
  }
  }
  return -1;

}

OR
int search_first_occurence(int k, vector<int> &A)
{

  // A is sorted.
  // otherwise sort(A.begin(), A.end());

  int L = 0; U = A.size()-1;
  int M;
  int res = -1;
  while(L<=U)
  {
  	M =  L + ((U-L)>>2);
  	if(A[M] == k)
  	{
  		res = M;
  		R = M-1;
    }
    else if(A[M} < K)
    {
    	L = M+1;
    }
    else
    {
    	U = M-1;
    }
  }
  return res;

}
