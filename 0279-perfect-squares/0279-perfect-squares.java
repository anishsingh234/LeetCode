public class Solution {
    public int numSquares(int n) {
        // Create an array to store the minimum number of perfect square numbers for each value up to n
        int[] dp = new int[n + 1];
        
        // Base case: 0 requires 0 perfect squares
        dp[0] = 0;
        
        // Iterate from 1 to n
        for (int i = 1; i <= n; i++) {
            // Initialize dp[i] to a large value
            dp[i] = Integer.MAX_VALUE;
            
            // Try each perfect square less than or equal to i
            int j = 1;
            while (j * j <= i) {
                // Update the minimum number of perfect squares needed for each value
                dp[i] = Math.min(dp[i], dp[i - j * j] + 1);
                j++;
            }
        }
        
        // The result is stored at the last index of dp
        return dp[n];
    }
}
