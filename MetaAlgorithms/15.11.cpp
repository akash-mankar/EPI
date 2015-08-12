// EDIT DISTANCE
// distance between String A and String B
// add 1 for either insertion, deletion or substitution.
// Any string to null string => edit distance = strlen(firststring)
// Levenshtein Distance
//  if A[a-1] = B[b-1] then E(A,B) = E(A[a-2], B[b-2]

                                              ( A[a-2],B) // delete
//  if A[a-1] != B[b-1] then E(A,B) = 1 + min ( A, B[a-2]) // insert
/*                                            ( A[a-2], B[b-2]) // sub

	Simpler version
     ( D(i-1, j))
D(i,j) = 1+ min(	 D(i, j-1))
		     ( D(i-1, j-1))

	B   3  3  3  3
	C   2  2  2  3
	K   1  1  2  3
	#   0  1  2  3
	    #  A  B  C
*/

int Lenvenshtein_distance(string A, string B)
{
	// Supposedly reduces space if A is bigger than B
	if(A.size() < B.size())
	{
		swap(A,B)
}

// if we swapped A and B, D is smaller
vector<int> D(B.size()+1);
// Initialization
iota(D.begin(), D.end(), 0);

for(int i =1; i<=A.size(); i++) // Notice <= because of size of D and table above
{
	int pre_i_1_j_1 = D[0]; // store D[i-1][j-1];
	D[0] = i;
	for(int j = 1; j<=B.size(); j++) // notice <=
	{
		int pre_i_1_j = D[j] // store D[i-1][j]

	D[j] = A[i-1] == B[j-1] ?
		  pre_i_1_j_1 : 1 + min(pre_i_1_j_1, min(D[j-1],D[j]));
	// previous D[i-1][j] will be next D[i-1][j-1];
	pre_i_1_j_1 = pre_i_1_j;
}
}
return D.back();
}
