#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a String"<<endl;
    cin>>str;
    string s1=str.substr(0,(str.length())/2);
    string s2=str.substr((str.length())/2,str.length());
    cout<<"After dividing the String in 2 equal parts"<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    return 0;
}