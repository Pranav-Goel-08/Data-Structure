#include<bits/stdc++.h>
using namespace std;
void addString(string f , string s ,int carry, string &ans , int i , int j){
    if(i<0 && j<0 && carry==0){
        return ;
    }

    int first = 0;
    int second = 0;
    if(i>=0){
        first = f[i] - '0';
    }
    if(j>=0){
        second = s[j] - '0';
    }

    int sum = first + second + carry;
    int lastdigit = sum % 10;
    carry = sum / 10;
    ans.push_back(lastdigit + '0');
    addString(f,s,carry,ans,i-1,j-1);

}
int main(){
    string f;
    cout<<"Enter the first String : ";
    cin>>f;
    string s;
    cout<<"Enter the second String : ";
    cin>>s;
    string ans = "";

    addString(f,s,0,ans,f.length()-1,s.length()-1);
    reverse(ans.begin(),ans.end());
    cout<<"Sum is : "<<ans<<endl;
}