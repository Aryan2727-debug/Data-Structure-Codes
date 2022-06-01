#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any number "<<endl;
    cin>>n;
    int divisor=2;
    while(divisor<=n-1){
        if(n%divisor==0){
            cout<<"Composite";
            return true;
        }
        divisor=divisor+1;
    }
    cout<<"Prime";
    return 0;
}

