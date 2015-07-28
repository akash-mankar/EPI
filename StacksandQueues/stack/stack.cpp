#include "stack.h"

template <class T, int maxStack>
Stack<T, maxStack>::Stack(){
    emptyStack = -1;
    top = emptyStack;
    items = new T[maxStack];
}

template<class T, int maxStack>
Stack<T,maxStack>::~Stack(){
    delete[] items;
}

template<class T, int maxStack>
bool Stack<T,maxStack>::full(){
   return (top + 1 == maxStack);
}

template<class T, int maxStack>
bool Stack<T,maxStack>::empty(){
    return (top == emptyStack);
}

template<class T, int maxStack>
T Stack<T,maxStack>::pop(){
  if(empty())
    return NULL;

  return items[top--];
}

template<class T, int maxStack>
void Stack<T,maxStack>::push(const T &x){
  if(!full()){
    items[++top] = x;
  }
  else{
    std::cout << "Stack is full, can't insert anymore elements" << endl;
  }
}
