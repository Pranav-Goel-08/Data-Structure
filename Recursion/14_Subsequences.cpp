#include<bits/stdc++.h>
using namespace std;
void subsequences(string s, int index ,string ans ,vector<string> &output){
    if(index==s.length()){
        output.push_back(ans);
        return;
    }
    // include
    subsequences(s,index+1,ans + s[index],output);

    // exclude
    subsequences(s,index+1,ans,output);
}
int main(){
    string s;
    cout<<"Enter the string : ";
    cin>>s;

    vector<string> output;
    int index = 0;
    string ans = "";
    subsequences(s,index,ans,output);
    for(int i=0;i<output.size();i++){
        cout<<output[i]<<endl;
    }
}