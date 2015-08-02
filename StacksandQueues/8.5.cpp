/*
Towers of hanoi problem
to transfer n discs from P1 to P2 using P3
// first transfer n-1 disc from P1 to P3 using P2.
// move ring n-1 from P1 to P2
// transfer n-1 discs from P3 to P2 using P1
*/

// Recursive solution

void transfer(const int &n, array<<stack>, 3> &pegs,
		const int &from, const int &to, const int &use)
{
    if (n>0)
    {
 	    transfer(n-1, pegs, from, use, to);
	    pegs[to].push(pegs[from].top());
	    pegs[from].pop();
	    cout << “Move from peg ” << from << “to ” << to << endl;
      transfer(n-1, pegs, use, to, from);
    }

}

void move_towers_of_hanoi(const int &n)
{
	// array of type stacks.
	// size of array 3.
  array<<stack>, 3> pegs;

  // initialize peg 0 with all discs..
  for(int i =n; i>=1 ;  --i)
  {
	   pegs[0].push(i);
  }
  transfer(n, pegs, 0, 1, 2);
}
