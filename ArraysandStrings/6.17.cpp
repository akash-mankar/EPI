// NxN 2D array rotation
// non sophisticated method
// Pay attention to i and j
// draw a matrix to understand
// Other method involves dividing the matrix into 4 parts rotating each part and then replacing one rotated part with other.

template <typename T>
void rotate_matrix(vector<vector<T>> &A){
  for (int i = 0; i< (A.size() >> 1); i++)
    for (int j = i; j < A.size() -1;  j++){
       int temp = A[i][j];
       A[i][j]     =  A[n-1-j][i];
       A[n-1-j][i] =  A[n-1-i][n-1-j];
       A[n-1-i][n-1-j] =  A[j][n-1-i];
       A[j][n-1-i] =  temp;

    }
}
