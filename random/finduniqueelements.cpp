sorted array : integers

example :
arr1[] = 3 4 4 4 5 6 6 6 7 7
         3, 4, 5, 6, 7
==

arr1[] = 3 4 5 6 7


void find_unique_elements_inArray(vector<int> &A)
{
	if(A.size() <= 1)
	{
		return;
  }
  // 3 4 4 4 5 6 6 6 7 7
  // idx = 2;
  int idx = 1;
	for(int i = 1 ;  i< A.size();  i++)
	{
		if(A[i-1] != A[i])
      {
      	A[idx] = A[i];
      	idx++;
      }
  }
  A.resize(A.begin(), A.begin()+idx);
  return;
}
