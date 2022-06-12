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
    
    cout<<"After Segregating 0's and 1's, the Array is"<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            cout<<arr[i]<<" ";
        }
        if(arr[i]==0){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}