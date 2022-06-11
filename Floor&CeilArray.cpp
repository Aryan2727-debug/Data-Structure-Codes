#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the Array"<<endl;
    cin>>n;
    double arr[n];
    
    for(int i=0;i<n;i++){
        cout<<"Enter the element at "<<i<<" position."<<endl;
        cin>>arr[i];
    }
    
    cout<<"The Array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    
    cout<<"The Floor values of Array are"<<endl;
    for(int i=0;i<n;i++){
        cout<<floor(arr[i])<<" ";
    }
    
    cout<<endl;
    
    cout<<"The Ceil values of Array are"<<endl;
    for(int i=0;i<n;i++){
        cout<<ceil(arr[i])<<" ";
    }
    
    return 0;
}