#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = { {1,2,3} , {4,5,6} , {7,8,9} };
    cout<<"The Matrix is"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum=0;
    cout<<"The Lower Triangle elements are"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i>j){
                cout<<arr[i][j]<<" ";
                sum+=arr[i][j];
            }
        }
    }
    cout<<endl;
    cout<<"Sum of Lower triangle elements = "<<sum<<endl;
    return 0;
}
