#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a String"<<endl;
    cin>>str;
    int n=str.length();
    for(int i=0;i<=n/2;i++){
        swap(str[i],str[n-i-1]);
    }
    cout<<"The reversed String is "<<str;
    return 0;
}