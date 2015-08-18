// Algorithm
// works only if array elements are distinct
// if array elements are not distinct
/*
	We’ll have to implement a recursive solution
	and for the case A[M] =A[U]
     search in both left and right array.
*/
int search_startofcyclicarray(const vector<int> &A)
{

    int L = 0; U = A.size()-1;
    int M;

    while(L < U) // crucial can’t be L <=U or can be- redundant step
    {
    		M =  L + ((U-L)>>2);
    	 	if(A[M] > A[U])
    		{
    			L = M+1;
      	}
      	else // A[M] <= A[U]
      	{
      		U = M // crucial can’t be M+1
      	}
    }
    return L;
}
