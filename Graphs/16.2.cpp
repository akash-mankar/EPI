// Shortest number of steps to convert string S to T
// Dictionary D of valid words.
// Shortest Production Sequence.
// S is a node S+1 differs from S by only one letter

// use BFS for shortest path
// Dictionary serves like a hashtable to keep track of which nodes are visited.
// Perform a D.erase operation each time you visit a node.
int transform_string(unordered_set<string> &D, string &s, string &t)
{
	queue<pair<string, int>> q;
	q.emplace(s, 0);
	D.erase(s);

	while(!q.empty())
	{
		pair<string, int> f(q.front);

		if(f == t)
			return f.second;

		string str = f.first;
		for(int i = 0; i < str.size(), ++i)
		{
			for(int j=0; j<26, j++)
			{
				str[i] = ‘a’ + j;

				auto it = D.find(str);
				if(it != D.end()
				{
					D.erase(it);
					q.emplace(str, f.second+1);
				}
      }
      str[i] = f.first[i];
    }
    q.pop();
  }
  return -1;
}
