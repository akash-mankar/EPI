// Design a Stack implementing MAX operation

// 1st Solution:
/*
    Using Pair.
    When inserting an element store that element as a key and value as a max element on the stack.
    max function returns value of the top element (Key) of the stack.
    O(n) Extra space
*/

template <class T, int maxStack>
class Stack{
  private:
    T* items;
    int emptyStack;
    int top;

  public:
    Stack();
    ~Stack();
    bool full();
    bool empty();
    T pop();
    void push(const T &x);
    //T max();
  //private:
    //std::pair<T,T>
};
