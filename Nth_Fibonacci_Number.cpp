#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n<=1){
        return n;
    }
    return fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int ans = fib(n);
    cout<<ans<<endl;
    return 0;
}
