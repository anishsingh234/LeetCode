class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int diff=0;
        int maxdiff=-1;
        int less=INT_MAX;
        for(int i=0; i<nums.size(); i++){
            less=min(less,nums[i]);
            if(less<nums[i] ){
                diff=nums[i]-less;
                maxdiff=max(maxdiff,diff);
            }
        }
        return maxdiff;  
    }
};