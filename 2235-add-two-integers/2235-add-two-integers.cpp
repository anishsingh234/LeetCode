class Solution {
public:
    int sum(int num1, int num2) {
         while (num2 != 0) {
            int sumWithoutCarry = num1 ^ num2;
            int carry = (num1 & num2) << 1;
            num1 = sumWithoutCarry;
            num2 = carry;
        }
        return num1; 
        
    }
};