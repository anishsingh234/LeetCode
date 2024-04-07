class Solution {
    public int maxWidthOfVerticalArea(int[][] points) {
        int maxWidth=Integer.MIN_VALUE;
        Arrays.sort(points, Comparator.comparingInt(a -> a[0]));
        for(int i=1; i<points.length; i++){
            int width=points[i][0]-points[i-1][0];
            maxWidth=Math.max(maxWidth,width);
        }
        return maxWidth;
    }
}