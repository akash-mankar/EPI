// Function to rotate an array.
// If we rotate with O(1) additional space, that is one array element at a time it would take O(nd) time
// d -> rotate by d positions.
// Other is make copy of entire array. O(n) space
// Best solution in O(1) space.
template <typename T>
void rotateArray(vector<T> &array, int d){
  // I/p 1 2 3 4 output:  3 4 1 2
  // d = 2
  // a. 4 3 2 1
  // b. 4 3 1 2
  reverse_array(array, 0, array.size()-1);
  reverse_array(array, 0, d-1);
  reverse_array(array, d, array.size()-1);
}

void reverse_array(vector &array, int start, int stop){
  // e.g. 1 2 3 4 start = 0  stop 3; length = 4;
  //
  int length = stop - start + 1;
  for (int i = 0;  i < length/2 ;  i++){
      int temp       =  array[start+i];
      array[start+i] =  array[stop-i];
      array[stop-i]  =  temp;
  }
}

// Another complicated method suggests using GCD
// Called the jugggling algorithm. Didn;t pay much attention but bonus methods to calculate GCd and LCMs
int GCD (int a , int b){
  if (b == 0)
    return a;
  else
    return GCD(a, a%b);
}

// Similarly LCM of two numbers n1 and n2 can be found by
// LCM = n1*n2 / GCD
