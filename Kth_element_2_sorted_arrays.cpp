#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void merge(int arr1[],int arr2[],int n1,int n2,int arr3[]){
    int i=0;
    int j=0;
    int k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }
    while(i<n1){
     arr3[k]=arr1[i];
     k++;
     i++;
    }
    while(j<n2){
     arr3[k]=arr2[j];
     k++;
     j++;
    }
}
int main()
{
    int arr1[]={2,3,6,7,9};
    int arr2[]={1,4,8,10};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    
    sort(arr1,arr1+n1);
    sort(arr2,arr2+n2);
    
    cout<<"The 1st Array is"<<endl;
    for(int i=0;i<n1;i++){
        cout<<arr1[i]<<" ";
    }
    
    cout<<endl;
    
    cout<<"The 2nd Array is"<<endl;
    for(int i=0;i<n2;i++){
        cout<<arr2[i]<<" ";
    }
    int arr3[n1+n2];
    cout<<endl;
    merge(arr1,arr2,n1,n2,arr3);
    cout<<"The merged Array is"<<endl;
    for(int i=0;i<n1+n2;i++){
        cout<<arr3[i]<<" ";
    }
    
    cout<<endl;
    
    int k;
    cout<<"Enter the value of k"<<endl;
    cin>>k;
    
    cout<<"The "<<k<<"th element in the Array is = "<<arr3[k-1]<<endl;
    return 0;
}
