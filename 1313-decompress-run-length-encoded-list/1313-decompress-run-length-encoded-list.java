class Solution {
    public int[] decompressRLElist(int[] nums) {
        int n = nums.length;
        int length = 0;
        for (int i = 0; i < n; i += 2) {
            length += nums[i];
        }
        
        int[] arr = new int[length];
        int index = 0;
        for (int i = 0; i < n; i += 2) {
            int freq = nums[i];
            int value = nums[i + 1];
            for (int j = 0; j < freq; j++) {
                arr[index] = value;
                index++;
            }
        }
        return arr;
    }
}
