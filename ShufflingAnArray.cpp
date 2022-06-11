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
    
    unsigned seed = 0;
    shuffle(arr,arr+n,default_random_engine(seed));
    cout<<"The shuffled Array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}