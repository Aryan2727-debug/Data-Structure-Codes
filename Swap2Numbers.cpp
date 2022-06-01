#include <iostream>
using namespace std;
void swap(int x,int y,int temp){
    temp=x;
    x=y;
    y=temp;
    cout<<"After swap x = "<<x<<" y = "<<y<<endl;    
}
int main()
{
    int a;
    int b;
    cout<<"Enter any 2 numbers"<<endl;
    cin>>a;
    cin>>b;
    int temp=a;
    cout<<"Before swap x = "<<a<<" y = "<<b<<endl;  
    swap(a,b,temp);
    return 0;
}

