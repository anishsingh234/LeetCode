class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int max_value = 0;
        for (const string& s : strs) {
            int value;
            if (all_of(s.begin(), s.end(), ::isdigit)) {
                value = stoi(s);
            } else {
                value = s.length();
            }
            max_value = max(max_value, value);
       }
       return max_value; 
    }
};