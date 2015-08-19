int find_square_root(const int &x)
{
	l = 1;
	U = x;

	/*
		For float if X < 1.0, i.e. 0.0001, sqrt(x) == 0.01 > x
		if x > 1.0, then sqrt(x) < x
		so for 1st case l = x, r = 1.0;
		for second, l = 1.0, r = x;
	*/

	while(l<r)
	{
		int m = l + ((U-l) >> 1);

		int square =  m * m;
		if( square == x)
		{
			return m;
    }
    else if(square < x)
    {
    	U = m;
    }
    else
    {
    	l = m;
    }
  }
  return l;
}
