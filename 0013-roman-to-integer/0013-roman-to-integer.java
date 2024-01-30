class Solution {
    public int romanToInt(String s) {
        int sum = 0;
        int prevValue = 0;

        for (int i = 0; i < s.length(); i++) {
            char rom = s.charAt(i);
            int value = 0;

            if (rom == 'I') {
                value = 1;
            } else if (rom == 'V') {
                value = 5;
            } else if (rom == 'X') {
                value = 10;
            } else if (rom == 'L') {
                value = 50;
            } else if (rom == 'C') {
                value = 100;
            } else if (rom == 'D') {
                value = 500;
            } else if (rom == 'M') {
                value = 1000;
            } else {
                System.out.println("Enter correct Roman numerals");
                return -1; // Or some error value
            }

            if (value > prevValue) {
                sum = sum - 2 * prevValue + value;
            } else {
                sum += value;
            }

            prevValue = value;
        }

        return sum;
    }
}
