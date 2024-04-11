class Solution {
    public int GCD(int a,int b){
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    public int findGCD(int[] nums) {
        Arrays.sort(nums);
        return GCD(nums[0],nums[nums.length-1]);
    }
}