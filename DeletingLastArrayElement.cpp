#include <iostream>
using namespace std;
int main()
{
    int arr[4]={23,45,67,89};
    cout<<"The original Array is"<<endl;
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"The Array after deleting the last element is"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

