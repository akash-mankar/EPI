// Design a Stack implementing MAX operation

// 1st Solution:
/*
    Using Pair.
    When inserting an element store that element as a key and value as a max element on the stack.
    max function returns value of the top element (Key) of the stack.
    O(n) Extra space
*/

// this class implements max operations using std:: stack
template <class T>
class Stack{
  public:
    T max(){
      if(empty() == false)
        return _s.top().second;
      else
        throw length_error("Empty Stack");
    }

    T pop(){
      if(empty() == true)
        throw length_error("Empty Stack");
      else
        return _s.pop();
    }

    // const before :: return a const reference
    // const after :: do not let the function modify any variable
    const bool empty(void) const{
        return _s.empty();
    }

    void push(const T &x){
      _s.emplace(x, max(x, empty() : x ? _s.top().second));
    }

  private:
    std::stack<pair<T,T>> _s;
};
