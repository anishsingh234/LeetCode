class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int original=0;
        for(int i=0; i<words.size(); i++){
            string sw=words[i];
            int index=0;
            int count=0;
            while(index<sw.length() && index<pref.length()){
                if(sw[index]==pref[index]){
                    count++;
                }
                if(count==pref.length()){
                    original++;
                }
                index++;
            }
        }
        return original;
    }
};