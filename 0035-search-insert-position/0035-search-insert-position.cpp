class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        int c;
        if(target==0 && nums[0]>0){
            return 0;
        }
        if(target<nums[0]){
            return 0;
        }
        while(i<nums.size() && nums[i]<=target){
            if(nums[i]==target){
                return i;
            }
            c=i;
            i++;
        }
        return c+1;  
    }
};