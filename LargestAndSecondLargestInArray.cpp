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
    
    cout<<"The Array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    
    sort(arr,arr+n);
    
    cout<<"The largest element in the Array is = "<<*max_element(arr,arr+n)<<endl;;
    cout<<"The second largest element in the Array is = "<<*max_element(arr,arr+(n-1))<<endl;
    return 0;
}