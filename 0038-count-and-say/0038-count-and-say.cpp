class Solution {
public:
    string countAndSay(int n) {
        if(n==1){
            return "1";
        }
        string result="";
        string str1= countAndSay(n-1);
        for(int i=0; i<str1.length(); i++){
            int count=1;
            char ch=str1[i];
            while(i<str1.length()-1 && str1[i]==str1[i+1]){
                count++;
                i++;
            }
            result+= to_string(count)+ string(1,str1[i]);
        }
        return result;
    }
};