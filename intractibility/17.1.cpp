// Dynamic Programming Subset Sum

long ties_election(vector<int> &V)
{
	int total_votes = accumulate(V.cbegin(), V.cend(), 0);

	if(total_votes & 1) // odd votes. not possible tie
	{
		return 0;
  }
	vector<vector<long>>table(V.size()+1, vector<long>(total_votes+1, 0);

	table[0][0] =1;

	for(int i = 0; i < V.size(); i++)
	{
		for(int j = 0; j <= total_votes; j++)
		{
			table[i+1][j] = table[i][j] + (j >= V[i] ? table[i-1][j-V[i]] : 0);
    }
  }

  return table[V.size()][total_votes>>1];
}
