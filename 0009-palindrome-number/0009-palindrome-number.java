class Solution {
    public boolean isPalindrome(int x) {
        int reversenum=0;
        int Originalnum=x;
        while(x>0){
           int remainder=x%10;
            reversenum=reversenum*10 +remainder;
            x=x/10;
        }
        if(Originalnum==reversenum){
            return true;
        }
        else {
            return false;
        }
    }
}