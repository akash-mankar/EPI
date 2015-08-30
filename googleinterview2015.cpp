Please use this Google doc to code during your interview. To free your hands for coding, we recommend that you use a headset or a phone with speaker option.

// array sorted/
// distinct elements
// supposed to contain 0-99
// print all missing elements in the output format given below/
Input: 52, 54, 78
Output: 0-51, 53, 55-77, 79-99

//possible inputs
A =  -2, -3, 55, 99  => throw error
A =  2, 3, 3, 55, 99 => throw error, repeated elements
A => empty -> it should print 0-99
A => A.size() == 100,  return empty string
0, 24, 97  => corner cases, 0, 97
55 -> 0-54 , 56-99

stringstream find_missing_elements(const vector<int> &A)
{
	stringstream s;

  /* edge case
  if(A.size() == 1)
  {
  	s << “0-” <<
  }
  */

	// Assuming vector is sorted
	for(int i = 0; i < A.size()-1; i++)
	{
		// base
		if(i==0 && A[i] != 0)
		{
			if(A[i] != 1)
			{
          s<< “0-”<< A[i]-1 << “,”;
			}
			else
      {
				s << “0,”<<;
			}
			continue;
    }

		if(A[i+1] - A[i] == 1)
		{
			continue;
    }
    else  // if(A[i+1] -A[i] > 1)
    		{
    			int k =  A[i+1] - A[i];

    			if( k ==2)
    			{
    				s << A[i]+1 << “,“ ;
          }
          else // k > 1
          {
          	s << A[i]+1 << “-” << A[i+1] -1<< “,”
          }
        }
    }

    // closing case
    int last = A[A.size()-1];
    if(last < 98)
    {
    	s << last+1 << “-99” ;
    }else if(last == 98)
    {
    	s << last +1 ;
    }
    return s;
}
