// Function to implement RLE and decoding


string encoding(string &abc){

  int count = 1;
  stringstream ss;

  // int i = 1 edge case
  for(int i = 1;  i < abc.size(); i++){
    if(abc[i-1] == abc[i]){
      count++;
    }else{
      ss << count << abc[i-1];
      count = 1;
    }
  }
  // Edge case
  ss << count << abc.back();
  return ss.str();
}

string decoding (const string &s){
  string ret;
  for(const char &c: s){
    if(isdigit(c)){
      count = c - '0';
    } else {
      ret.append(count, c);
      count = 0;
    }
  }
}
