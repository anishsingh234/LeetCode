class Solution {
public:
    string getPermutation(int n, int k) {
        string next;
        for (int i=1; i<=n; i++){
            next.push_back(i+'0');
        }
        for (int i=1; i<k; i++){
            next_permutation(next.begin(),next.end());
        }
        return next;
        
    }
};