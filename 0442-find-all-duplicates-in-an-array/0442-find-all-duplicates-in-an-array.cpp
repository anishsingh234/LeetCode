class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        int n = arr.size();
        vector<int> result; 
        for(int i = 0; i < n; i++) {
            int num = abs(arr[i]);
            if(arr[num-1] < 0) {
                result.push_back(num);
            } else {
                arr[num-1] *= -1;
            }
        }
        return result; 
    }
};