class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int count = 0;
        auto it = nums.begin();
        while (it != nums.end() && *it < k) {
            it = nums.erase(it);
            count++;
        }
        return count;
    }
};
