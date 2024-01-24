class Solution {
    public int numIdenticalPairs(int[] nums) {
        int count = 0;
        int[] frequency = new int[101];

        for (int i = 0; i < nums.length; i++) {
            int num = nums[i];
            count += frequency[num];
            frequency[num]++;
        }

        return count;
    }
}