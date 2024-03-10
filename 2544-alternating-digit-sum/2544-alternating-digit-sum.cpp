class Solution {
public:
    int Reverse(int n){
        int sum =0;
        while(n>0){
            sum =(sum*10) + n%10;
            n=n/10;
        }
        return sum;
    }
    int alternateDigitSum(int n) {
        int count =1;
        int alSum=0;
        int num = Reverse(n);
        while(num>0){
            if(count%2==0){
                alSum = alSum + ((num%10)* -1);
            }
            else{
                alSum += num%10;
            }
            num=num/10;
            count++;
        }
        return alSum;
    }
};