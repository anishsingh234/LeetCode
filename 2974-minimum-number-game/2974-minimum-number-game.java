class Solution {
    public int[] numberGame(int[] nums) {
      int n=nums.length;
      int arr[]=new int[n];
      int bob=0,alice=1;
      Arrays.sort(nums);
      for(int i=1; i<n; i=i+2){
        arr[bob]=nums[i];
        bob+=2;
      }
      for(int i=0; i<n; i=i+2){
        arr[alice]=nums[i];
        alice+=2;
      } 
      return arr;  
    }
}