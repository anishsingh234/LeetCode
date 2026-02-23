class Solution {
public:
    int isSelfDividingInteger(int n){
        int num=n;
        while(num>0){
            int remainder=num%10;
            num=num/10;
            if(remainder==0 || n%remainder!=0){
                return 0;
            }
        }
        return 1;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>arr;
        for(int i=left; i<=right; i++){
            if( isSelfDividingInteger(i)==1){
                arr.push_back(i);
            }
        }
        return arr;
        
    }
};