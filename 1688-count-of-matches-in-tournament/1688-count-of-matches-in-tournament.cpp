class Solution {
public:
    int numberOfMatches(int n) {
        int team=n; 
        int  matches=n;
        int count=0;
        while(team>1){
            if(team%2==0){
                matches=team/2;
                team=team/2;
                count =count+matches;
            }
            else{
                matches=(team - 1) / 2;
                team=(team - 1) / 2 + 1;
                count =count+matches;
            }
        }
        return count;
    }
};