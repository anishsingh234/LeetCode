class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int arr1[1000001]={0};
        for(int i=0; i<n; i++){
            arr1[nums[i]]++;
        }
        int a=arr1[0];
        for(int i=0; i<(n+1); i++){
            if(arr1[i]>a){
                a=i;
            }
        }
        return a;
        
    }
};