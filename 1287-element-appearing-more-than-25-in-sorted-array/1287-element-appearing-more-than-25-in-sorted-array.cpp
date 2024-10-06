class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        int cnt=1;
        int el=arr[0];
        if(n==1){
            return arr[0];
        }
        for(int i=1; i<n; i++){
            if(el!=arr[i]){
                el=arr[i];
                cnt=1;
            }
            else{
                cnt++;
            }
            if(cnt>(n/4))  return el;
        }
        return 0; 
    }
};
