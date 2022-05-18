#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void MaxMin(int arr[],int n){
    if(n==1){
        cout<<"The Maximum and Minimum elements in the Array are"<<endl;
        cout<<arr[0]<<endl;
    }
    if(n==2){
        if(arr[0]>arr[1]){
            cout<<"The Maximum element in the Array is"<<endl;
            cout<<arr[0]<<endl;
            cout<<"The Minimum element in the Array is"<<endl;
            cout<<arr[1]<<endl;
        }else{
            cout<<"The Maximum element in the Array is"<<endl;
            cout<<arr[1]<<endl;
            cout<<"The Minimum element in the Array is"<<endl;
            cout<<arr[0]<<endl;
        }
    }
    if(n>2){
        cout<<"The Maximum element in the Array is"<<endl;
        cout<<*max_element(arr,arr+n)<<endl;
        cout<<"The Minimum element in the Array is"<<endl;
        cout<<*min_element(arr,arr+n)<<endl;
    }
}
int main()
{
    int arr[]={23,46};
    cout<<"The Array is"<<endl;
    for(int i=0;i<2;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    MaxMin(arr,2);
    return 0;
}
