class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> arr={-1,-1};
        int i=0;
        int j=nums.size();
        int count=0;
        while(i<j){
            if(nums[i]==target && count==0){
                arr[0]=i;
                count++;
            }
            if(nums[i]==target && count==1){
                arr[1]=i;
            }
            i++;
        }
        return arr;
    }
};