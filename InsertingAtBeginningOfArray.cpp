#include <iostream>
using namespace std;
int main()
{
    int arr[4]={24,56,78,19};
    int i=4;
    while(i>0){
        arr[i]=arr[i-1];
        i--;
    }
    int val;
    cout<<"Enter the value you want to insert"<<endl;
    cin>>val;
    arr[0]=val;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

