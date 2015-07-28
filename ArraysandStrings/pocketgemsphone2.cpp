Needle = "cat" O(M)

Haystack = "123cat"  ca123cat O(N)

return 3

 */

O(MN)

int findNeedle(string& needle, string &haystack){

  int needlen = needle.size();
  int haylen = haystack.size();

  if(needlen > haylen){
     return -1;
  }

  for (int i = 0; i < haylen; i++){
    int j = 0;
    if(needle[j] == haystack[i]){
       j++;
       int temp = i;
       temp++;
       int k = j;
       while (k < needlen && i < haylen){
          if(needle[k] == haystack[temp]){
              k++;
              temp++;
          }
          else{
             break;
          }
       }
       if( k ==  needlen){
           return i;
       }
       else
          continue;

    }
  }
  return -1;

}

A [3,3,3,3,6,6,8,8,8,8,8,8,0,4,4,4,4]

B [4,2,9,1]

C [3,6,-1,0]

map <element, count>
unordered_map


3 4
6 2
8 6


O(A)+O(B)

using namespace std;
vector<int> acopiedb(vector<int> &A, vector<int> &B){
     unordered_map<int, int> mappingA = {};

     (auto it = A.begin(); it != A.end();  it++){
         if(mappingA.find(it) != mappingA.end()){
            int count =  mappingA[it];
            mappingA.insert(it, ++count);
         }
         else{
            mappingA.insert(it, 1);
         }
     }

     unordered_map<int, int> mappingB = {}
     (auto it = mappingA.begin(); it != mappingA.end(); it++){
           int count =  mappingA[it];
           if(mappingB.find(count) == mappingB.end()){
              mappingB.insert(count, it);
           }
     }

     vector<int> C;
     (auto it = B.begin(); it != B.end(); it++){
            if( mappingB.find(it) != mappingB.end()){
                C.push_back(mappingB[it]);
            }else
                C.push_back(-1);
     }

     return C;
}
