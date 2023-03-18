#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int largest = arr[0];
    int secondLargest = INT_MIN;


    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i]<largest && arr[i]>secondLargest)
        {
            secondLargest = arr[i];
        }
        
    }

    cout<<secondLargest<<endl;

    // Similarly for Smallest 
    int smallest = arr[0];
    int secondsmallest = INT_MAX;


    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            secondsmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i]>smallest && arr[i]<secondsmallest)
        {
            secondsmallest = arr[i];
        }
        
    }

    cout<<secondsmallest<<endl;
}