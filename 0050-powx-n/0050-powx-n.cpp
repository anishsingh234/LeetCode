class Solution {
public:
    double myPow(double x, int n) {
        long long nl=n;
        bool IsNegative=false;
        double ans = 1;
        if(n<0){
            IsNegative = true;
            nl=nl*-1;
        }
        while(nl>0){
            if(nl%2==1){
                ans=ans*x;
            }
            x=x*x;
            nl=nl/2;
        }
        if(IsNegative){
            return (1/ans);
        }
        return ans;
    }

};