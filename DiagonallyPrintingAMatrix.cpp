#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the Matrix"<<endl;
    cin>>n;
    int arr[n];
    
    cout<<"Enter the elements of the Matrix"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"The Matrix is"<<endl;
    cout<<arr[0]<<"   ";
    cout<<arr[1]<<endl;
    cout<<arr[2]<<"   ";
    cout<<arr[3]<<endl;
    
    cout<<"The Diagonal printing of the Matrix is"<<endl;
    cout<<arr[0]<<endl;
    cout<<arr[2]<<"   ";
    cout<<arr[1]<<endl;
    cout<<"    ";
    cout<<arr[3]<<endl;
    return 0;
}