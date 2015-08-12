// Maximum subarray problem
// instead of divide and conquer
// We’ll be going from 1 to n …
// When we calculate sum at any point
// that sum minus min sum gives us maximum sum at S[i]

template <Typename T>
pair<int, int> maximumSubarray(vector<T> &A)
{
	pair<int, int> range(0,0);
	// Range(i,j) represents indices from i to j-1
	// these are indices of maximum sub array

	int min_idx = -1;
	int min_sum = 0; sum = 0; max_sum = 0;

	for(int i = 0;  i< A.size();  i++)
	{
		sum += A[i]
    if (sum < min_sum)
    {
    	min_sum = sum;
    	min_idx = i;
    }

    if(sum - min_sum > max_sum)
    {
    	max_sum = sum - min_sum;
    	range(min_idx+1, i+1);
    }
  }
  return range;
}

// simple variation
// just return maxium sum
template <typename T>
int returnmaximumSumofSubArray(vector<T> &A)
{
	int maximum_so_far = A[0];
	int curr_max = A[0];
	for(int i = 1; i< A.size(); i++)
	{
		current_max = max(curr_max+A[i] , A[i]);
		max_so_far = max(curr_max, max_so_far);
	}
	return max_so_far;
}
