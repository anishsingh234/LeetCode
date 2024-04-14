class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int count = 1;
        int c = arr[0];
        if(n==1){
            return 1;
        }
        for (int i = 1; i < n; i++) {
            if (c == arr[i]) {
                count++;
                if (count > n / 4) { 
                    return arr[i];
                }
            } else {
                c = arr[i];
                count = 1;
            }
        }
        return 0;
    }
};
