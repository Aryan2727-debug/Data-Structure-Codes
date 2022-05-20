#include <iostream>
using namespace std;
int main()
{
    int arr[]={2,3,-10,56,79,100,-45};
    int even=0;
    int odd=0;
    int positive=0;
    int negative=0;
    for(int i=0;i<7;i++){
        if(arr[i]%2==0){
            even++;
        }
        else if(arr[i]%2!=0){
            odd++;
        }
    }
    for(int i=0;i<7;i++){
        if(arr[i]>0){
            positive++;
        }
        else{
            negative++;
        }
    }
    cout<<"The number of even elements are "<<even<<endl;
    cout<<"The number of odd elements are "<<odd<<endl;
    cout<<"The number of positive elements are "<<positive<<endl;
    cout<<"The number of negative elements are "<<negative<<endl;
    return 0;
}

