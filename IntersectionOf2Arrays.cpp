#include <iostream>
#include <bits/stdc++.h>
#include <set>
using namespace std;
void printIntersection(int arr1[],int arr2[],int n1,int n2){
    int i=0;
    int j=0;
    while(i<n1 && j<n2){
    if(arr1[i]<arr2[j]){
        i++;
    }
    else if(arr2[j]<arr1[i]){
        j++;
    }
    else{
        cout<<arr2[j]<<" ";
        i++;
        j++;
    }
}
}
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
    
    cout<<endl;
    
    sort(array1,array1+n1);
    sort(array2,array2+n2);
    
    cout<<"The Intersection of both Arrays is"<<endl;
    printIntersection(array1,array2,n1,n2);
    return 0;
}