// Fibanacci

0 1 1 2 3 4 7

int fib(int n)
{
	if(n <=1)
		return n;
	return fib(n-1) + fib(n-2);
}

// Memoization
vector<int> memo(n+1, 0);
int fib(int n)
{
	if(n <=1)
		return n;
	if(memo[n] != 0)
		return memo[n]
	else
		return fib(n-1) + fib(n-2);
}

// dynamic programming
int fib(int n)
{
	if(n<=1)
		return n;
	vector<int>fibc(n+1,0);
	fibc[0] = 0;
	fibc[1] = 1;

	for(int i = 2;  i<=n; i++)
  {
  	fib[i] = fib[i-1] + fib[i-2];
  }
  return fib[n];
}

// dynamic programming
// space optimized
int fib(int n)
{
	if(n<=1)
		return n;
	int a=0; b=1; c;
	for(int i = 2;  i<=n; i++)
  {
  	c = a + b;
  	a = b;
  	b = c;
  }
  return b;
}
