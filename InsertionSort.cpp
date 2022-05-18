#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
    int arr[]={12,45,23,51,19,8};
    cout<<"The Array is"<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=1;i<6;i++){       //starting from 1 index i.e. 1st element considered sorted
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];    //swapping elements
            j--;
        }
        arr[j+1]=current;
    }
    cout<<endl;
    cout<<"The Sorted Array is"<<endl;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

