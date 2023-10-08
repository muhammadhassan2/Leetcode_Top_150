class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j=0;
         for(int i=m;i<nums1.size();i++)nums1[i]=nums2[j++];
         sort(nums1.begin(),nums1.end());
    }
};

// second solution 
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m,j=nums2.size();
         if(j==0)return ;
        for(int i=0;i<m;i++){
            if(nums1[i]<=nums2[0]){
                continue;
            }
            else if(nums1[i]>nums2[0]){
                swap(nums1[i],nums2[0]);
                for(int k=0;k<j-1;k++){
                    if(nums2[k]>nums2[k+1]){
                        swap(nums2[k],nums2[k+1]);
                    }
                }           
            }
        }
        for(int i=0;i<j;i++){
            nums1[m++]=nums2[i];
        }
    }
};

// third solution 
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int i=m-1;
       int j=n-1;
       int k=m+n-1;

       while(j>=0){
           if(i>=0&&nums1[i]>nums2[j]){
               nums1[k--]=nums1[i];
               i--;
           }
           else{
               nums1[k--]=nums2[j--];
           }

       }


    }
};
