class Solution {
    public boolean threeConsecutiveOdds(int[] arr) {
        int count=0;
        if(arr.length<3){
            return false;
        }else{
            for(int i=0; i<arr.length; i++){
              if(arr[i]%2==0){
                count=0;
              }
              else if(count==1&& arr[i]%2!=0){
                count++;
              }
              else if(count==2&& arr[i]%2!=0){
                return true;
              }
              else{
                count++;
              }
            }

        }
        
        if(count>=3){
            return true;
        }
        return false;

        
    }
}