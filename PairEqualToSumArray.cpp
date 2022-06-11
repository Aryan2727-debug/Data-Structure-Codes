#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int arr[]={1,2,3,4};
    int x;
    cout<<"Enter the value of sum(x)"<<endl;
    cin>>x;
    for(int i=0;i<4;i++){
        if((arr[i]+arr[i+1]==x)){
            cout<<arr[i]<<" "<<arr[i+1]<<endl;
        }
        if((arr[i+1]+arr[i+2]==x)){
            cout<<arr[i+1]<<" "<<arr[i+2]<<endl;
        }
        if((arr[i+2]+arr[i]==x)){
            cout<<arr[i+2]<<" "<<arr[i]<<endl;
        }
        if(arr[i]+arr[i+3]==x){
            cout<<arr[i]<<" "<<arr[i+3]<<endl;
        }
    }
    return 0;
}