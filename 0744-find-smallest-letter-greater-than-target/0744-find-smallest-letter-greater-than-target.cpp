class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int i = 0;
        int c = 0; 
        if (letters[0] > target) {
            return letters[0];
        }
        while (i < letters.size() && letters[i] <= target) {
            i++;
        }
        if (i < letters.size()) {
            return letters[i];
        } else { 
            return letters[0]; 
        }
    }
};
