#include <iostream>
using namespace std;
int main()
{
    int arr[4]={20,45,67,90};
    int i=4;
    int pos;
    cout<<"Enter the index at which you want to insert"<<endl;
    cin>>pos;
    while(i>=pos){
        arr[i]=arr[i-1];
        i--;
    }
    int val;
    cout<<"Enter the value"<<endl;
    cin>>val;
    arr[pos]=val;
    cout<<"The array is"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

