class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr;
        map<int,int> mpp;

        int mini=int(n/3)+1;

        for(int i=0; i<n; i++ ){
            mpp[nums[i]]++;
            if(mpp[nums[i]]==mini){
                arr.push_back(nums[i]);
            }
            if(arr.size()==2) break;
        }
        return arr;
    }
};