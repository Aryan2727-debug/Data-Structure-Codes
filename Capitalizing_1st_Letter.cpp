#include <iostream>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a String"<<endl;
    cin>>str;
    cout<<"The String is "<<str<<endl;
    str[0] = toupper(str[0]);
    cout<<"The new String is "<<str<<endl;
    return 0;
}
