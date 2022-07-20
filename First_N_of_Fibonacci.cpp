#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int x=0;
    int y=1;
    int z=0;
    for(int i=1;i<=n;i++){
        if(i==1){
            cout<<x<<" ";
            continue;
        }
        if(i==2){
            cout<<y<<" ";
            continue;
        }
        z=x+y;
        x=y;
        y=z;
        cout<<z<<" ";
    }
    return 0;
}
