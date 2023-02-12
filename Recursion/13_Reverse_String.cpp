#include<iostream>
using namespace std;

// Method 1 : 

// void reverseString(string &s,int start,int end){
//     if(start>=end){
//         return;
//     }
//     swap(s[start],s[end]);
//     reverseString(s,start+1,end-1);
// }

// Method 2 :
void reverseString(string &s,int index,int n){
    if(index==n){
        return;
    }
    
    reverseString(s,index+1,n);
    cout<<s[index]<<" ";
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
    // Call for Method 1 :
    // int start = 0;
    // int end = n-1;
    // reverseString(s,start,end);
    // for(int i=0;i<n;i++){
    //     cout<<s[i]<<" ";
    // }cout<<endl;

    // Call for Method 2
    reverseString(s,0,n);
}