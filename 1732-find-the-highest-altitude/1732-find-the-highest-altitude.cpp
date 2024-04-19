class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int hiAlt=0;
        int max1=0;
        for(int i=0; i<gain.size(); i++){
            hiAlt+=gain[i];
            max1=max(max1,hiAlt);
        }
        return max1;
    }
};