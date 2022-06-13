#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void subtractMatrices(int arr1[],int arr2[],int n){
    int c1=arr1[0]-arr2[0];
    int c2=arr1[1]-arr2[1];
    int c3=arr1[2]-arr2[2];
    int c4=arr1[3]-arr2[3];
    cout<<c1<<endl;
    cout<<c2<<endl;
    cout<<c3<<endl;
    cout<<c4<<endl;
}
int main()
{
    int arr1[]={11,25,13,43};
    int arr2[]={10,66,73,18};
    cout<<"After subtracting the 2 Matrices, the resultant is"<<endl;
    subtractMatrices(arr1,arr2,2);
    return 0;
}