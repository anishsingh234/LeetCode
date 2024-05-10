class Solution {
public:
    int minPairSum(vector<int>& arr) {
        sort(begin(arr), end(arr));
        int result = 0;
        int i = 0, j = arr.size()-1;
        while(i < j) {
            int sum = arr[i] + arr[j];
            result = max(result, sum);
            i++;
            j--;
        }
        return result;     
    }
};