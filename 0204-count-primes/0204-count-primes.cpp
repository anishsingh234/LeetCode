class Solution {
public:
    bool Prime(int n){
        if(n <= 1){
           return false;
        }
        if(n == 2){
            return true;
        }
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                return false;
            }
        }
        return true;
    }
    int countPrimes(int n) {
        int count = 0;
        for(int i = 2; i < n; i++){
            if(Prime(i)){
                count++;
            }
        }
        return count;  
    }
};
