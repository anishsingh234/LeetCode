class Solution {
    public int maxSumAfterPartitioning(int[] arr, int k) {
        int n = arr.length;
        int[] dp = new int[n];

        for (int i = 0; i < n; i++) {
            int maxVal = Integer.MIN_VALUE;

            for (int j = 1; j <= Math.min(k, i + 1); j++) {
                maxVal = Math.max(maxVal, arr[i - j + 1]);
                int prevSum = (i - j >= 0) ? dp[i - j] : 0;
                dp[i] = Math.max(dp[i], prevSum + maxVal * j);
            }
        }

        return dp[n - 1];
    }
}