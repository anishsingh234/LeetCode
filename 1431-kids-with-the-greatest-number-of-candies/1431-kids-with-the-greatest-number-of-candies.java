import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int n = candies.length;
        List<Boolean> arr = new ArrayList<>();
        int maxCandies = Integer.MIN_VALUE;
    
        for (int candy : candies) {
            maxCandies = Math.max(maxCandies, candy);
        }
   
        for (int i = 0; i < n; i++) {
            if (candies[i] + extraCandies >= maxCandies) {
                arr.add(true);
            } else {
                arr.add(false);
            }
        }
        
        return arr;
    }
}
