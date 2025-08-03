class Solution {
public:
    vector<int> getRow(int n) {
        long long ans=1;
        vector<int> arr;
        arr.push_back(ans);
        for(int i=1; i<=n; i++){
            ans=ans*(n-i+1);
            ans=ans/i;
            arr.push_back(ans);
        }
        return arr;
        
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int i=0; i<numRows; i++){
            res.push_back(getRow(i));
        }
        return res;
    }
};
