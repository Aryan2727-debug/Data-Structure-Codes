#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[]={1,2,3,4};
    int arr2[]={1,2,3,4};
    
    cout<<"The Matrices are"<<endl;
    cout<<arr1[0]<<"   ";
    cout<<arr1[1]<<endl;
    cout<<arr1[2]<<"   ";
    cout<<arr1[3]<<endl;
    
    cout<<endl;
    
    cout<<arr2[0]<<"   ";
    cout<<arr2[1]<<endl;
    cout<<arr2[2]<<"   ";
    cout<<arr2[3];
    
    cout<<endl;
    
    if(arr1[0]==arr2[0] && arr1[1]==arr2[1] && arr1[2]==arr2[2] && arr1[3]==arr2[3]){
        cout<<"The Matrices are Identical"<<endl;
    }else{
        cout<<"The Matrices are not Identical"<<endl;
    }
    return 0;
}