class Solution {
    public double average(int[] salary) {
        double count=0,sum=0;
        int minimum=Integer.MAX_VALUE;
        int maximum=Integer.MIN_VALUE;
        for(int i:salary){
           minimum=Math.min(minimum,i);
           maximum=Math.max(maximum,i);
        }
        for(int i:salary){
            if(i!=minimum && i!=maximum ){
                sum+=i;
                count++;
            }
        }
        return sum/count;
        
    }
}