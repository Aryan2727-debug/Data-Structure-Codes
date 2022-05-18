#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
    int arr[]={24,12,9,50,45,67,55};
    cout<<"The Array is"<<endl;
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<6;i++){
        for(int j=i+1;j<7;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<endl;
    cout<<"The Sorted Array is"<<endl;
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

