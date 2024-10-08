class Solution {
public:
    int lastoccurences(vector<int>& nums, int target){
        int low=0;
        int high=nums.size()-1;
        int last=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                last=mid;
                low=mid+1;  
            }else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return last;
    }
    int firstOccurences(vector<int>& nums, int target){
        int low=0;
        int high=nums.size()-1;
        int first=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==target){
                first=mid;
                high=mid-1; 
            }else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
         return first;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int last1=lastoccurences(nums,target);
        int first1=firstOccurences(nums,target);
        return {first1,last1};
    }
};