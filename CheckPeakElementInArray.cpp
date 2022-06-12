#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool checkPeakElement(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cout<<"Enter the size of the Array"<<endl;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cout<<"Enter the element at "<<i<<" position."<<endl;
        cin>>arr[i];
    }
    
    cout<<"The Array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    
    if(checkPeakElement(arr,n)){
        cout<<"There is a Peak element in the Array"<<endl;
    }else{
        cout<<"There is no Peak element in the Array"<<endl;
    }
    return 0;
}