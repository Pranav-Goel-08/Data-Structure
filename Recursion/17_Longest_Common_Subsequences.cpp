#include<bits/stdc++.h>
using namespace std;
int commonSubsequences(string f , string s,int i , int j){
    if(i==f.length()){
        return 0;
    }
    if(j==s.length()){
        return 0;
    }
    int ans = 0;
    if(f[i]==s[j]){
        ans = 1 + commonSubsequences(f,s,i+1,j+1);
    }
    else{
        ans = max(commonSubsequences(f,s,i,j+1),commonSubsequences(f,s,i+1,j));
    }
    return ans;
}
int main(){
     string f;
    cout<<"Enter the first String : ";
    cin>>f;
    string s;
    cout<<"Enter the second String : ";
    cin>>s;
    int i = 0;
    int j = 0;
    int ans = commonSubsequences(f,s,i,j);
    cout<<"LCS is : "<<ans<<endl;
}