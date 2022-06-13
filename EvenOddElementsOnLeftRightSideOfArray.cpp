#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,3,4,5,8,6};
    int evenCountRight=0;
    int oddCountRight=0;
    int n=6;
    for(int i=n/2;i<n;i++){
        if(arr[i]%2==0){
            evenCountRight++;
        }else{
            oddCountRight++;
        }
    }
    
    int evenCountLeft=0;
    int oddCountLeft=0;
    
    for(int i=0;i<n/2;i++){
        if(arr[i]%2==0){
            evenCountLeft++;
        }else{
            oddCountLeft++;
        }
    }
    
    cout<<"The number of Even elements on the left side of the Array is = "<<evenCountLeft<<endl;
    cout<<"The number of Odd elements on the left side of the Array is = "<<oddCountLeft<<endl;
    
    cout<<endl;
    
    cout<<"The number of Even elements on the right side of the Array is = "<<evenCountRight<<endl;
    cout<<"The number of Odd elements on the right side of the Array is = "<<oddCountRight<<endl;
    return 0;
}