#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string str = "aabcdeef";
    char ch1;
    cout<<"Enter the 1st character"<<endl;
    cin>>ch1;
    char ch2;
    cout<<"Enter the 2nd character"<<endl;
    cin>>ch2;
    
    if( (count(str.begin(),str.end(),ch1)) == (count(str.begin(),str.end(),ch2)) ){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}
