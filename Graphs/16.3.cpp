// Key factor to check bipartite graph,
// for a source vertex u there are no two vertices v1 and v2 at equal
// distances from u. if they are there is an odd cycle
// Hence we can never divide this in two halves and also make sure
// Each vertex connects to at least one vertex in other.
// main solution BFS again


struct GraphVertex
{
	int d = -1;
	vector<GraphVertex*> edges; // vector of graphvertex pointers
						// adjacency list only
}

bool BFS(GraphVertex* G)
{
	queue<GraphVertex> q;
	q.emplace(G);

	while(!q.empty())
	{
		for(GraphVertex* &t: q.front()->edges)
		{
			if(t->d == -1)
			{
				t->d = q.front()->d + 1;
      }
      else if(t->d == q.front()->d)
      {
      	return false;
      }
    }
    q.pop();
  }
}

bool is_it_feasible_to_divide(vector<GraphVertex>* G) // pointer to graph vertex vector
{
	// this for loop makes sure we go over all components in the graph
	// if there is even a single disconnected component just running BFs from an arbitrary node doesn’t make sure entire graph is traversed.
	for(GraphVertex &v: *G)
	{
		if(v.d == -1) // unvisited
		{
			v.d = 0;
			if(BFS(&v) == false)
				return false;
		}
	}
}
