/*
approche : brute force
time complexity : O(n)
space complexity : O(1)
level : easy
time to solve : 5 min
*/


class Solution {
public:
    bool isPalindrome(string s) {
   
          
          for(int i=0;i<s.size();i++){
              s[i]=tolower(s[i]);
          }
          int j=s.size()-1;
        for(int i=0;i<s.size()&&i<=j;i++){
             if(!isalpha(s[i])&&!isdigit(s[i]))continue;
             while(!isalpha(s[j])&&!isdigit(s[j])){
                 j--;
             }
           
             if(s[i]!=s[j--]){
                 return 0;
             }

          }
          return 1;
      
    }
};
