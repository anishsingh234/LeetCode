class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        while(i<n-1 && nums[i]<nums[i+1]){
            i++;
        }
        return i;  
    }
};