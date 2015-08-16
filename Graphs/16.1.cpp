// Traverse through a 2D maze to find a path from entrance to exit
// in this solution we assume graph consists of all vertices
// I think its assumed that the

/*
DFS or BFS
crucial part
Keep track of visited and unvisited nodes.
else it ll loop forever if a cycle exists in the path.

BFs only gives us shortest path
but we would need an explicit Queue for it.
*/
struct Coordinate
{
	bool operator==(Coordinate &that) const
	{
		return (that.x == x && that.y == y)
}

	int x, y;
};


bool is_feasible(Coordinate &curr, vector<vector<int>> &maze)
{
	return curr.x >=0 && curr.x < maze.size() &&
		     curr.y >=0 && curr.y < maze[curr.x].size() &&
		     maze[curr.x][curr.y] == 0; // unvisited
}

bool search_maze_helper(vector<vector<int>> &maze, Coordinate &curr, Coordinate &e, Coordinate<vector> &path)
{
	if(curr == e)
		return true;

	array<array<int, 2>, 4> shift {{{{0,1}}, {{0, -1}}, {{1, 0}}, {{-1, 0}}
	/*
		Other way to declare same array as above would be array of pairs
		pair<int, int> adj[4] = {make_pair(1,2), make_pair(.....}
	*/

	for(auto &s : shift)
	{
	 	Coordinate next{curr.x + s[0], curr.y+s[1]};
		if(is_feasible(next, maze)
		{
			maze[next.x][next.y] == 1; // visited
			path.emplace_back(next);
			if(search_maze_helper(maze, next, e, path)
      {
      	return true;
      }
    }
    path.pop_back();
  }
  return false;
}
// s entrance
// e exit
// If we mark a coordinate = 1 that means its visited we add it to the path.
// if the coordinate is = 0 then its unvisited
vector<Coordinate> search_Maze(vector<vector<int>> &maze, Coordinate &s, Coordinate &e)
{
	vector<Coordinate> path;
	maze[s.x][s.y] == 1;
	path.emplace_back(s);

	if(search_maze_helper(maze, s, e, path) == false)
	{
		path.pop_back(); // When no path, return empty path.
  }
  return path;

}
