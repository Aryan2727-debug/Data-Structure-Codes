#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

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
    
    
    for(int i=0;i<n;i++){
        if(count(arr,arr+n,arr[i])>(n/2)){
            cout<<arr[i]<<" is the Majority Element in the Array"<<endl;
        }
    }
    return 0;
    
}