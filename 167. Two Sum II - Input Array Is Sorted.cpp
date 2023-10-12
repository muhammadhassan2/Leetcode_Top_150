/*
approche : two pointers
time complexity : O(n)
space complexity : O(1)
level : easy
time to solve : 5 min
*/


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0,r=numbers.size()-1;
        
        while(l<r){
            int s=numbers[l]+numbers[r];
            if(s>target)r--;
            else if(s<target) l++;
            else break;
        }
        return vector<int>{l+1,r+1};


    }
};
