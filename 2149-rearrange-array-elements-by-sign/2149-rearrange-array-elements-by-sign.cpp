class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        int negI=1,posI=0;
        vector<int>arr(n,0);
        for(int i=0; i<n; i++){
            if(nums[i]<0){
                arr[negI]=nums[i];
                negI+=2;
            }
            else{
                arr[posI]=nums[i];
                posI+=2;
            }
        }
        return arr;
    }
};