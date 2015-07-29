// design a stack

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
