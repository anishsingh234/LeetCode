class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest=1;
        int lastSmaller=INT_MIN;
        int n=nums.size();
        if(n==0) return 0;
        int count=0;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++){
            if(nums[i]-1==lastSmaller){
                count+=1;
                lastSmaller=nums[i];
            }
            else if(nums[i]!=lastSmaller){
                count=1;
                lastSmaller=nums[i];
            }
            longest=max(longest,count);
        }
        return longest;
        
    }
};