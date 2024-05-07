class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int i=0;
        int tp=0;
        long long add=1;
        while(add<=n){
            add+=(i<nums.size() && nums[i]<=add)?nums[i++]:add;
            tp++;
        }
        return tp-i;
    }
};