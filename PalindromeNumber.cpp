#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    int x=n;
    int rev=0;
    while(n>0){
        rev=rev*10+n%10;
        n=n/10;
    }
    if(x==rev){
        cout<<"Palindrome Number"<<endl;
    }else{
        cout<<"Not a Palindrome Number"<<endl;
    }
    return 0;
}

