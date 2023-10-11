class Solution {
public:
    int lengthOfLastWord(string s) {
          int p=0;
          int sz=0;
          for(int i=s.size()-1;i>=0;i--){
                 if(p==0&&isalpha(s[i])){
                     p=1;
                     sz++;
                 }
                 else if(p==1&&isalpha(s[i])){
                     sz++;
                 }
                 else if(p==1&&!isalpha(s[i])){
                     break;
                 }
          }
          return sz;


    }
};
