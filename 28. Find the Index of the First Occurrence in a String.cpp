/*
note :: code needed to be optimized
approach :: brute force
time complexity  :: O(n*m) 
space complexity :: O(1)
level :: Easy
time to solve :: 5 Min
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size()>haystack.size())return -1;
        int j=0;
        for(int i=0;i<haystack.size();i++){
            int cnt=0;
            for(int j=0;j<needle.size()&&i+j<haystack.size();j++){
                if(haystack[i+j]==needle[j])cnt++;

            }
            if(cnt==needle.size())return i;

        }
        return -1;
    }
};
