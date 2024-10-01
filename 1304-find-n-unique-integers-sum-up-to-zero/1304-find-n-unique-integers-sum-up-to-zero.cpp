class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> zz;
        if(n==1){
            return {0};
        }
        if(n==2){
            return {-1,1};
        }
        int ans=0;
        for(int i=0; i<n-1; i++ ){
            zz.push_back(i);
            ans+=i;
        }
        zz.push_back(ans*-1);
        return zz;
    }
};