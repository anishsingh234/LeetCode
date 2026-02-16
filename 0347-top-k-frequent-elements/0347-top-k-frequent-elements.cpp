class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int>ans;

        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        
        for(int i=0; i<k; i++){
            int currentMaxFreq=INT_MIN;
            int currentMaxElement=0;
            for(auto entry:mp){
                if(entry.second > currentMaxFreq){
                    currentMaxFreq=entry.second;
                    currentMaxElement=entry.first;
                }
            }
            ans.push_back(currentMaxElement);
            mp.erase(currentMaxElement);
        }
        return ans;
    }
};