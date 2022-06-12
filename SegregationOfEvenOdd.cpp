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
    
    cout<<"The Even elements in the Array are"<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cout<<arr[i]<<" ";
        }
    }
    
    cout<<endl;
    
    cout<<"The Odd elements in the Array are"<<endl;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}