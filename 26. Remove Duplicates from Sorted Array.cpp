class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      set<int>s;
      int j=0;
      for(int i=0;i<nums.size();i++){
          if(s.find(nums[i])==s.end()){
              nums[j++]=nums[i];
              s.insert(nums[i]);
          }
      }
      return j;  
    }
};
