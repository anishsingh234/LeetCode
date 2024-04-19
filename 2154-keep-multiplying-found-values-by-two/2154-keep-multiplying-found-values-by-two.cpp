class Solution {
public:
    int search(vector<int>& nums, int original){
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==original){
                return 1;
            }
        }
        return -1;
    }
    int findFinalValue(vector<int>& nums, int original) {
        int ab =search(nums,original);
        if(ab==-1){
            return original;
        }
        else{
            original=2*original;
            return findFinalValue(nums,original);
        }
        return 0;
        
    }
};