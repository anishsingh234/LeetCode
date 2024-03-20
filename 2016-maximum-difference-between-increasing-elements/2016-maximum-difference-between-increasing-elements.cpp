class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int diff=0;
        int maxdiff=-1;
        for(int i=0; i<nums.size(); i++){
            for(int j=1; j<nums.size(); j++){
                if(nums[i]<nums[j] && i<j){
                    diff=nums[j]-nums[i];
                    maxdiff=max(maxdiff,diff);
                }
            }
        }
        return maxdiff;
        
    }
};