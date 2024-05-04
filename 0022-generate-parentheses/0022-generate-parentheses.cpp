class Solution {
public:
    void addParenthesis(vector<string> &num,int n,int oc,int cc,string s){
        if(oc==n && cc==n){
            num.push_back(s);
            return;
        }
        if(oc<n){
            addParenthesis(num,n,oc+1,cc,s+"(" );
        }
        if(oc>cc){
            addParenthesis(num,n,oc,cc+1,s+")" );
        }
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> num;
        int oc =0,cc=0;
        addParenthesis(num,n,oc,cc,"" );
        return num;
    }
};