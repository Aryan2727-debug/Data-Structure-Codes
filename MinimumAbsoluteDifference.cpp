#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main()
{
    int arr[]={1,4,2,0,8,5};
    sort(arr,arr+6);
    int abs_diff=0;
    for(int i=0;i<5;i++){
        abs_diff=abs(arr[i+1]-arr[i]);
    }
    cout<<abs_diff;
    return 0;
}