//

// in order traversal of a BST using a stack and no recursion

//

template <typname T>
void BST_sorted_order_printing(const shared_ptr<BST<T>> &n){

  stack<shared_ptr<BST<T>>> s;
  shared_ptr<BST<T>> curr = n;

  while(!s.empty() || curr){
    if(curr){
      s.push(curr);
      curr =  curr->left;
    }else{
      curr = s.top();
      s.pop();
      cout << curr->data << endl;
      curr = curr->right;
    }
  }

}
