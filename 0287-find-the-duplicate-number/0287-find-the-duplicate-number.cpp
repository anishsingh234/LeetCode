class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int arr1[1000001]={0};
        for(int i=0; i<n; i++){
            arr1[nums[i]]++;
        }
        int a=INT_MIN;
        for(int i=0; i<(1000001); i++){
           if(arr1[i]>1){
            return i;
           }
        }
        return 0;
    }
};