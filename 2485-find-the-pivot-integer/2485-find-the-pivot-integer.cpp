class Solution {
public:
    int sum(int i ,int n){
        int result=0;
        while(i<=n){
            result+=i;
            i++;
        }
        return result;
    }
    int pivotInteger(int n) {
        int i=0;
        while(i<=n){
            int ab=sum(0,i);
            int bc=sum(i,n);

            if(ab==bc){
                return i;
            }
            i++;
        }
        return -1;
    }
};