#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int sum=0;
    while(n>0){
        sum=sum+(n%10);
        n=n/10;
    }
    cout<<"The sum of digits of the number is = "<<sum<<endl;
    return 0;
}