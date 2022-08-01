#include <iostream>

using namespace std;
class overload{
    public:
    void add(int a,int b){
        cout<<a+b<<endl;
    }
    void add(int a,float b){
        cout<<a+b<<endl;
    }
    void add(float a,float b){
        cout<<a+b<<endl;
    }
    void add(int a,int b,int c){
        cout<<a+b+c<<endl;
    }
    void add(float a,int b){
        cout<<a+b<<endl;
    }
};
int main()
{
    overload o;
    o.add(5,3);
    o.add(5,3,9);
    o.add(1,2.0f);
    o.add(2.0f,3.0f);     //we put f because double is taken by default
    return 0;
}
