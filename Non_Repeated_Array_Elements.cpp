#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the length of the Array"<<endl;
    cin>>n;
    int arr[n];
    
    cout<<"Enter the elements of the Array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"The Array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    
    cout<<"The non-repeated elements in the Array are"<<endl;
    for(int i=0;i<n;i++){
        if(count(arr,arr+n,arr[i]) == 1){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}