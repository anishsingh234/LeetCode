class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int currectCount=0;
        int maxCount=0;
        for(int i=0; i<nums.length; i++){
            if(nums[i]==1){
                currectCount++;
            }
            else{
                maxCount=Math.max(maxCount,currectCount);
                currectCount=0;
            }

        }
        maxCount=Math.max(maxCount,currectCount);
        return maxCount;
    }

}