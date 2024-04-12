class Solution {
    public int averageValue(int[] nums) {
        int avg=0,count=0;
        for(int i:nums){
            if(i%3==0 && i%2==0){
                avg +=i;
                count++;
            }
        }
        if(count==0)
        return 0;
        return avg /count; 
    }
}