class Solution {
public:
    int reverse(int x) {
        bool isNeg=false;
        if(x<0){
           isNeg=true;
        }
        int num=abs(x);
        long long int ans=0;
        while(num>0){
            ans=ans*10+num%10;
            num=num/10;

            if (ans > INT_MAX) {
                return 0;
            }
        }
        if(isNeg){
            return -ans;
        }
        if (ans < INT_MIN || ans > INT_MAX) {
            return 0;
        }
        return ans;
    }
};