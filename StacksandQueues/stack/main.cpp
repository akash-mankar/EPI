#include <iostream>
#include "stack.h"

using namespace std;
int main(int argc, char* argv[]){

  Stack<char, 10>s1;
  char ch;
  while((ch = cin.get()) != '\n'){
      if(!s1.full()){
        s1.push(ch);
        cout << ch;
      }
  }
  cout << endl;

  while(!s1.empty()){
    cout << s1.pop();
  }
  cout << endl;

  Stack<double, 4>s2;
  double[] d ={3.6, 5.6, 2.0, 1.0, 9.0, 0.0};
  int i = 0;
  while(d[i] !=  0.0){
    i++;
    if(!s2.full()){
      s2.push(d[i]);
    }
  }
  while(!s2.empty()){
    cout << s2.pop();
  }
  cout << endl;
  return 0;
}
