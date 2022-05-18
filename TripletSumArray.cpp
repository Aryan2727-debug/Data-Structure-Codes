#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int arr[]={2,2,2,4,5};
    int sum;
    cout<<"Enter any number as sum"<<endl;
    cin>>sum;
    for(int i=0;i<5;i++){
        int triplet[]={arr[i],arr[i+1],arr[i+2]};
        if(accumulate(triplet,triplet+3,0)==sum){
            for(int i=0;i<3;i++){
                cout<<triplet[i]<<" ";
            }
        }
        }
    
    return 0;
}
