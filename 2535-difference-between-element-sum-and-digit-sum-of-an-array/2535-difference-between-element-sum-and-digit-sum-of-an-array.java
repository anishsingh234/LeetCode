class Solution {
    public int differenceOfSum(int[] nums) {
        int e_sum=0;
        int digitSum=0;
        for(int i=0; i<nums.length; i++){
            e_sum=e_sum+nums[i];
            while(nums[i]>0){
                digitSum+=nums[i]%10;
                nums[i]=nums[i]/10;
            }
        }
        return Math.abs(e_sum-digitSum);
    }
}