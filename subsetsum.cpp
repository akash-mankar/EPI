// Brute Force Subset Sum
/*
1,3,5,4 = sum = 7 n=4              sum2     n
               7    3               3     3
               7    2   2    2      3     2
*/
bol isSubsetSum(vector<int> &V, int n, int sum)
{
	if(sum != 0 and n==0)
	{
		return false;
  }

  if(sum == 0)
  {
  	return true;
  }

  if(V[n-1] > sum
  	return isSubsetSum(V,n-1, sum)
  else
  return isSubsetSum(V, n-1, sum) || isSubsetSum(V, n-1, sum-V[n-1])

}
