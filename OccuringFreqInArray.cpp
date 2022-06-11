#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
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
    
    sort(arr,arr+n);
    
    cout<<"The sorted Array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    
    int a;
    cout<<"Enter the element you want to find the occurring frequency of in the Array"<<endl;
    cin>>a;
    cout<<a<<" comes "<<count(arr,arr+n,a)<<" times in the Array"<<endl;
    return 0;
}