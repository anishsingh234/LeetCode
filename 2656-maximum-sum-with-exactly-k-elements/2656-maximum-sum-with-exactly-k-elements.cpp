class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
       int n=nums.size()-1;
       sort(nums.begin(),nums.end());
       int sum=0;
       for(int i=0; i<k; i++){
          sum +=nums[n];
          nums[n]++;
       } 
       return sum;
    }
};