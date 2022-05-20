#include<iostream>
using namespace std;
void ToH(int start,int end,char source,char aux,char destination)
{
    if(start>end)
    {
        return;
    }
    ToH(start,end-1,source,destination,aux);
    cout<<"move disc "<<end<<" from "<<source<<" to "<<destination<<endl;
    ToH(start,end-1,aux,source,destination);
}
int main(){
ToH(1,2,'A','B','C');
return 0;
}

