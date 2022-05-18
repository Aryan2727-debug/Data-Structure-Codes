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
    int sum=0;
    while(n>0){
        sum=sum+(n%10)*(n%10)*(n%10);
        n=n/10;
    }
    if(x==sum){
        cout<<"Armstrong Number"<<endl;
    }else{
        cout<<"Not an Armstrong Number"<<endl;
    }
    return 0;
}

