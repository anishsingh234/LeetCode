class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
      int n=nums.size()-1;
      int ans=0;
      for(int i=0; i<k; i++){
        ans=ans+nums[n];
        nums[n]=nums[n]+1;
      }
      return ans;

    }
};