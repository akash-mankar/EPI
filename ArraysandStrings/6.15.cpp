// Implement a function to print an array in spiral
// Complicated algorithm
// outermost loop:
// Right-> 0,0 to 0,n-2 down -> 0,n-1 to  n-2,n-1
// LEFT -> n-1,n-1 to  n-1,1 up -> n-1,0 to 1,0
// This reduces the amount that needs to be covered to (n-2)x(n-2) 2D array.


void printSpiral(vector< vector<int>> & A){
  // how many times to repeat?
  // rows = 9, A.size = 9
  // Repeat for half the number of rows why?
  // Need to figure out
  for (int offset = 0; offset < ceil(A.size() * 0.5);  ++offset){
    printSpiralwithOffest(A, offset);
  }
}

void printSpiralwithOffest(vector<vector<int>> &A, int offset){
   // Edge case
   // For a 3x3 matrix after the outerloop only the center element is left.
   // don't rerun the loop
   if(offset == A.size()- offset -1){
     cout << A[offset][offset];
   }

   for (int j = offset; j < A.size() - offset - 1; j++){
     cout << A[offset][j] << ' ';
   }
   for (int i = offset; i < A.size() - offset - 1; i++){
     cout << A[offset][A.size() - offset -1] << ' ';
   }
   for (int j = A.size() - offset - 1; j > offset;  j--){
     cout << A[A.size() - offset - 1][j] << ' ';
   }
   for (int i = A.size() - offset - 1; i > offset ; i--){
     cout << A[i][offset] << ' ';
   }
}
