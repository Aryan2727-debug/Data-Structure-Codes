#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int linear_search(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==i){
            return i;
        }
    }
    return -1;
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
    int fixed_point=linear_search(arr,n);
    cout<<"The fixed point in the Array is "<<fixed_point<<endl;
    return 0;
}