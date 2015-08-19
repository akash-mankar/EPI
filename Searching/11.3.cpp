// Algorithm
// A[i] - i =  0;
// SO imagine a B[i] =  A[i] - i and look for 0 in B
// don’t need to allocate an external B
// Just use A[i] - i as val
int search_A[i]=i(vector<int> &A)
{

    // A is sorted.

    int L = 0; U = A.size()-1;
    int M;
    int res = -1;
    while(L<=U)
    {
    	M =  L + ((U-L)>>2);
    	int val = A[M] - M;
    	if(val > 0)
    	{
    		R = M-1;
      }
      else if(val == M]
      {
      	return M;
      }
      else // val < M
      {
      	L = M+1;
      }
    }
    return -1;
}
