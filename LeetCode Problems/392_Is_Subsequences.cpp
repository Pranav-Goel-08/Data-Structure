class Solution {
public:
    int isSub(string s,string t,int i,int j){
        if(i==s.length() || j==t.length()){
            return 0;
        }
        if(s[i]==t[j]){
            return 1 + isSub(s,t,i+1,j+1);
        }
        else{
            return isSub(s,t,i,j+1);
        }
    }
    bool isSubsequence(string s, string t) {
        if(isSub(s,t,0,0)==s.length()){
            return true;
        }
        else{
            return false;
        }
    }
};