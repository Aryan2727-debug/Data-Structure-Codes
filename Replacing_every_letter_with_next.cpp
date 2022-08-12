#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter a String"<<endl;
    cin>>str;
    cout<<"The String is "<<str<<endl;
    for(int i=0;i<str.length();i++){
        str[i] = str[i]+1;
    }
    cout<<"The new String is "<<str<<endl;
    return 0;
}
