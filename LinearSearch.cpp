#include <iostream>
using namespace std;
int main()
{
    int arr[4]={1,2,3,4};
    for(int i=0;i<4;i++){
        if(arr[i]==3){
            cout<<"The index of the element 3 is "<<i<<endl;
        }
    }
    return 0;
}
