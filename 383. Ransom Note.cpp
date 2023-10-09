class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int arr[28],ar[28];
        memset(ar,0,sizeof(ar));
        memset(arr,0,sizeof(arr));
        for(int i=0;i<magazine.size();i++){
            ar[magazine[i]-'a']++;
        }
         for(int i=0;i<ransomNote.size();i++){
            arr[ransomNote[i]-'a']++;
        }
        for(int i=0;i<28;i++){
            if(arr[i]>ar[i])return false;
        }
        return true;
        
    }
};
