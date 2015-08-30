vector<vector<string> returnAnagrams(vector<string> &Dictionary)
{
	vector<vector<string>> anagrams;
	unordered_map<string, vector<string>> mapping;
	for(const string &s : Dictionary)
	{
		string sorted_str(s);
		sort(sorted_str.begin(), sorted_str.end());
		mapping[sorted_str].emplace_back(s);
  }

  for(const pair<string, vector<string>> &p : mapping)
  {
  	if(p.second.size() >= 2)
  	{
  		anagrams.emplace_bacl(p.second);
    }
  }
  return anagrams;
}
