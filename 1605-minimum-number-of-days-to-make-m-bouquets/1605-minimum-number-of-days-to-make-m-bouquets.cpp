class Solution {
public:
    bool possible(vector<int> &arr,int day,int m,int k){
        int n=arr.size();
        int cnt=0;
        int noOFB=0;
        for(int i=0; i<n; i++){
            if(arr[i]<=day){
                cnt++;
            }
            else{
                noOFB+=(cnt/k);
                cnt=0;
            }
        }
        noOFB+=(cnt/k);
        return noOFB>=m;
    }
    int minDays(vector<int>& arr, int m, int k) {
        long long val=m*1ll*k*1ll;
        int n=arr.size();
        if(val>n)return -1;
        int mini=INT_MAX,maxi=INT_MIN;
        for(int i=0; i<n; i++){
            mini=min(arr[i],mini);
            maxi=max(arr[i],maxi);
        } 
        int low=mini,high=maxi;
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(arr,mid,m,k)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};