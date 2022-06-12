#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string s1;
    cout<<"Enter a String"<<endl;
    cin>>s1;
    string s2;
    cout<<"Enter second String"<<endl;
    cin>>s2;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    if(s1==s2){
        cout<<"The Strings are Anagrams of each other"<<endl;
    }else{
        cout<<"The Strings are not Anagrams of each other"<<endl;
    }
    return 0;
}