/*
approach :: two pointers
time complexity  :: O(n) where n is the size of (t)
space complexity ::O(1) did't use extra space
level :: Easy
time to solve : 5 Min
*/  

class Solution {
public:
    bool isSubsequence(string s, string t) {
         int j=0;
          for(int i=0;i<t.size();i++){
               if(j<s.size()&&t[i]==s[j]){
                   j++;
               }
          }
          cout<<j<<endl;
          if(j==s.size())return 1;
          return 0;

    }
};
