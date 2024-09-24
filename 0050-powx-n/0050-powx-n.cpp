class Solution {
public:
    double myPow(double x, int n) {
       double ans=1;
       long long p=n;
       if(p<0){
        p=-p;
        x=1/x;
       }
       while(p>0){
        if(p&1){
            ans=ans*x;
            p--;
        }
        x=x*x;
        p=p>>1;
       }
       return ans ;
    }

};