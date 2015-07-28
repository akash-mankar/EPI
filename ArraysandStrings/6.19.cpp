// Reverse all the words in a sentence.
// Alice Likes Bob  -> bob sekil ecilA
// Bob likes Alice  ->


void reverse_words(string &input){
  // reverse the entire string
  reverse(input.begin(), input.end());

  size_t start = 0, end;
  while((end = input.find(' ', start)) != string::npos){
    reverse(input.begin() + start, input.begin() + end - 1);
    start = end + 1;
  }
  reverse(input.begin() + start, input.end());
}
