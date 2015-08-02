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

// 2nd SOlution:
/*
  This is using an auxillary stack made of pairs.
  pair.element.second represents number of times the max element occurs in the
  parent stack
  This is usually to decrease best case space complexity to O(1)
  WOrst case is O(n)

  While in our first solution both the best case and worst case is O(n) additional
  space
*/
