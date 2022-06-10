#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1;
    cout<<"Enter the size of the first Array"<<endl;
    cin>>n1;
    int array1[n1];
    for(int i=0;i<n1;i++){
        cout<<"Enter the element at "<<i<<" position."<<endl;
        cin>>array1[i];
    }
    
    cout<<"The first Array is"<<endl;
    for(int i=0;i<n1;i++){
        cout<<array1[i]<<" ";
    }
    
    cout<<endl;

    int n2;
    cout<<"Enter the size of the second Array"<<endl;
    cin>>n2;
    int array2[n2];
    for(int i=0;i<n2;i++){
        cout<<"Enter the element at "<<i<<" position."<<endl;
        cin>>array2[i];
    }
    
    cout<<"The second Array is"<<endl;
    for(int i=0;i<n2;i++){
        cout<<array2[i]<<" ";
    }
    
    int array3[n1+n2];
    for(int i=0;i<n1+n2;i++){
        if(i<n1){
            array3[i]=array1[i];
        }else{
            array3[i]=array2[i-n1];
        }
    }
    
    cout<<endl;
    
    cout<<"The combined Array is"<<endl;
    for(int i=0;i<n1+n2;i++){
        cout<<array3[i]<<" ";
    }
    return 0;
}