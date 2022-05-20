#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    int x=0;
    int y=1;
    int z=0;
    cout<<"The Fibonacci Series upto "<<n<<" is "<<endl;
    while(z<=n){
        x=y;
        y=z;
        z=x+y;
        cout<<z<<endl;
    }
    
    return 0;
}

