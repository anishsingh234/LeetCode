class Solution {
    public List<Integer> addToArrayForm(int[] num, int k) {
        ArrayList<Integer> ll= new ArrayList<>();
        int carry = 0;
        int i = num.length - 1;
        while (i >= 0 || k > 0 || carry > 0) {
            int digit = carry;
            if (i >= 0) {
                digit += num[i];
            }
            if (k > 0) {
                digit += k % 10;
                k /= 10;
            }
            ll.add(digit % 10);
            carry = digit / 10;
            i--;
        }
        Collections.reverse(ll);
        return ll;
    }
}