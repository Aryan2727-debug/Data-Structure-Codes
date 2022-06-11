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
    
    int oddCount=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            oddCount++;
        }
    }
    cout<<"The number of Odd elements in the Array are = "<<oddCount<<endl;
    return 0;
}