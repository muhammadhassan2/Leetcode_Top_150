class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int>mp;
        int j=0;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])==mp.end()){
                mp[nums[i]]=1;
                nums[j++]=nums[i];
            }
            else{
                mp[nums[i]]++;
                if(mp[nums[i]]<=2){
                    nums[j++]=nums[i];
                }
            }
        }
        return j;
    }
};
