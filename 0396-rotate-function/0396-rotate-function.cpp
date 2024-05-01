class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0; 
        
        long long sum = 0;
        long long f = 0;
       

        for (int i = 0; i < n; i++) {
            sum += nums[i];
            f += i * nums[i];
        }
        
        long long maxRotationSum = f; 
        
        for (int i = 1; i < n; i++) {
            f += sum - n * nums[n - i];
            maxRotationSum = max(maxRotationSum, f); 
        } 
        return maxRotationSum;
    }
};