#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a number(1-9)"<<endl;
    cin>>ch;
    switch(ch){
        case '1':
        cout<<"I"<<endl;
        break;
        case '2':
        cout<<"II"<<endl;
        break;
        case '3':
        cout<<"III"<<endl;
        break;
        case '4':
        cout<<"IV"<<endl;
        break;
        case '5':
        cout<<"V"<<endl;
        break;
        case '6':
        cout<<"VI"<<endl;
        break;
        case '7':
        cout<<"VII"<<endl;
        break;
        case '8':
        cout<<"VIII"<<endl;
        break;
        case '9':
        cout<<"IX"<<endl;
        break;
        default:
        cout<<"Not a valid number"<<endl;
    }
    return 0;
}

