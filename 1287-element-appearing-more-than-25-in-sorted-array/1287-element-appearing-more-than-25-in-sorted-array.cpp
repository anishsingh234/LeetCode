class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        int cnt=0;
        int el=arr[0];
        for(int i=0; i<n; i++){
            if(arr[i] == el) {
                cnt++;
            } else {
                el = arr[i];
                cnt = 1;  
            }
            
            if(cnt > n / 4) {
                return el;
            }
        }
        return 0; 
    }
};
