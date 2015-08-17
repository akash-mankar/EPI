// Knapsack Problem

template<Typename ValueType>(const int &w, const vector<pair<int, ValueType>> &items)
{
	vector<ValueType> V(w+1, 0);

	for(int  i = 0;  i< items.size(); i++)
	{
		for(int j= w; j >= items[i].first; --j)
		{
			V[j] =  max(V[j-1], V[j- items[i].first] + items[i].second);
}
}
return V[w];
}
