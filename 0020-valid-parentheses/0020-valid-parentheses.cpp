class Solution {
public:
   bool isValid(string s) {
     stack<char> st;
     unordered_map<char, char> brackets = {{')', '('}, {'}', '{'}, {']', '['}};
    
      for (char c : s) {
        if (brackets.find(c) != brackets.end()) {
            char topElement = st.empty() ? '#' : st.top();
            st.pop();
            if (topElement != brackets[c]) {
                return false;
            }
        } else {
            st.push(c);
        }
      }
      return st.empty();
   }
};