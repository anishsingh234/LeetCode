class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();
        int start = 0, end = n-1;
        int mid;
        
        while(start < end) {
            mid = start + (end-start)/2;
            bool isEven = (end-mid)%2==0;
            
            if(arr[mid] == arr[mid+1]) {
                if(isEven) {
                    start = mid+2;
                } else {
                    end = mid-1;
                }
            } else if(arr[mid] == arr[mid-1]) {
                if(isEven) {
                    end = mid-2;
                }else {
                    start = mid+1;
                }
            } else {
                return arr[mid];
            }
        }
        
        return arr[start];
    }
};