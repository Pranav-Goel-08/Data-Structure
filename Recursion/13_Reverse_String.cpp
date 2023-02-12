#include<iostream>
using namespace std;
void reverseString(string &s,int start,int end){
    if(start>=end){
        return;
    }
    swap(s[start],s[end]);
    reverseString(s,start+1,end-1);
}
int main(){
    int n ;
    cout<<"Enter the length of the string : ";
    cin>>n;

    string s;
    cout<<"Enter the string : ";
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int start = 0;
    int end = n-1;
    reverseString(s,start,end);
    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
    }cout<<endl;
}