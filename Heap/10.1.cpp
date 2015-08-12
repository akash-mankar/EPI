/*
Merging Multiple large k sorted files problem.
Min-heap with total k elements, each from smallest of all k files.
cost to insert and extract-min O(logk)
If total number of elements across k files = n, then total time O(nlogk)

We use min-heap in the following solution.
priority_queue by default is sorted in descending order, hence uses comparator less.
Here we also make use of pair<T,int> because pair.second represents the sequence the element came from
*/
template <typename T>
class Compare
{
	public:
	bool operator()(const pair<T, int> &lhs, const pair <T,int> &rhs)
	{
		return lhs.first > rhs.first; // for min heap >,  for max  heap  < or default
  }
};

template <typename T>
vector<T> merge_arrays(const vector<vector<T>> S)
{
	priority_queue<pair<T, int>, vector<pair<T, int>>, Compare<T>) min_heap;

	vector<int> S_idx(S.size(), 0); // S.size() indices initialized to value 0

	for(int i = 0; i < S.size(); i++)
	{
    if(S[i].size > 0)
    {
    	min_heap.emplace(S[i][0],i);
    	S_idx[i] = 1; // which is the next element in a sequence
    }
  }

  // Now let the merge begin
  vector<T> ret;
  while(!min_heap.empty())
  {
  	pair<T, int> p = min_heap.top();
  	ret.emplace_back(p.first);
  	// Add the smallest element into the heap if possible
  	if(S_idx[p.second] < S[p.second].size())
  	{
  		min_heap.emplace(S[p.second][S_idx[p.second]], p.second);
  		S_idx[p.second]++;
    }
    min_heap.pop();
  }
  return ret;
}
