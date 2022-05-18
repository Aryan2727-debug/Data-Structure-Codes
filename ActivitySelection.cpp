#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void selectMaxActivities(int s[],int f[],int n){
    int i,j;
    i=0;
    cout<<" "<<i;
    for(int j=1;j<n;j++){
        if(s[j]>=f[i]){
            cout<<" "<<j;
            i=j;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the number of Activities"<<endl;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the starting time for "<<i<<"th Activity"<<endl;
        cin>>s[i];
    }
    int f[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the finishing time for "<<i<<"th Activity"<<endl;
        cin>>f[i];
    }
    sort(f,f+n);
    cout<<endl;
    cout<<"The starting times are"<<endl;
    for(int i=0;i<n;i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
    cout<<"The finishing times are"<<endl;
    for(int i=0;i<n;i++){
        cout<<f[i]<<" ";
    }
    cout<<endl;
    cout<<"The activities selected for Maximum Profit are :-"<<endl;
    selectMaxActivities(s,f,n);
    return 0;
}
