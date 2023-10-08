class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt=0,j=-1;
        bool p=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){cnt++;p=1;
            nums[i]+=1000;
            }
        }
        sort(nums.begin(),nums.end());
    return nums.size()-cnt;

    }
};
