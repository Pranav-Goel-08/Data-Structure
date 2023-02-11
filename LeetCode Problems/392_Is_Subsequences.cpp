/*

Intuition
In this question we simply compare both strings we create two pointer i and j , the base case is if i == s.length() or j == t.length() means if any of string will empty then we have to return the answer.

Approach
Now Let's Suppose there is a string 's' = "abc" and another string 't' = "ahbgdc" , we know that 's' is the subsequence of 't' so we take two pointer 'i' for 's' string and 'j' for string 't' , now if s[i] is equal to t[j] then we 'return 1 + recursive function(with i+1 , j+1)'.
return 1 + solve(s,t,i+1,j+1) because we count for first comparison also after that recursion will take care.
After traversing string if isSub return the value equal to s.length the answer is true otherwise the answer is false.

*/

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
