#include<iostream>
using namespace std;

int linearSearch(int arr[],int size , int key){
    for(int i=0;i<size;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int key ;
    cout<<"Enter the target element : ";
    cin>>key;

    cout<<linearSearch(arr,10,key);
}