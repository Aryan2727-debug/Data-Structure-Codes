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
    
    int evenCount=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evenCount++;
        }
    }
    cout<<"The number of Even elements in the Array are = "<<evenCount<<endl;
    return 0;
}