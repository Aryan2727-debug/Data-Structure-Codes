#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main()
{
    string str = "C++ is an Object Oriented Programming Language";
    int count=1;
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            count++;
        }
    }
    cout<<"The number of Words in the String are "<<count<<endl;
    return 0;
}
