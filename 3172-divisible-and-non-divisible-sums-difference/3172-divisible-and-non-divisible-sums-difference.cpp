class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num2=0;
        int num1=0;
        for(int i =1; i<=n; i++){
            if(i%m==0){
                num2=num2+i;
            }else{
                num1=num1+i;
            }
        }
        int num3=num1-num2;
        return num3;
        
    }
};