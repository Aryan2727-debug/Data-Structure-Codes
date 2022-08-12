#include <iostream>

using namespace std;
int fact=0;
int factorial(int n){
    for(int i=n;i>0;i--){
        fact+=i;
    }
    return fact;
}
int main()
{
    int n=6;
    cout<<factorial(n);
    return 0;
}
