class Solution {
    public List<Integer> sequentialDigits(int low, int high) {
        List<Integer> result = new ArrayList<>();
        String digits = "123456789";

        for (int length = String.valueOf(low).length(); length <= String.valueOf(high).length(); length++) {
            for (int start = 0; start <= 9 - length; start++) {
                String subString = digits.substring(start, start + length);
                int num = Integer.parseInt(subString);

                if (num >= low && num <= high) {
                    result.add(num);
                }
            }
        }

        return result; 
    }
}