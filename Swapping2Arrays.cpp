#include <iostream>
#include <array>
using namespace std;
int main()
{
    double array_one[] = {1,2,3};
    double array_two[] = {9,8,7};
    cout<<"Before interchanging,Arrays are:-"<<endl;
    cout<<"Array 1"<<endl;
    for(int i=0;i<3;i++){
        cout<<array_one[i];
    }
    cout<<endl;
    cout<<"Array 2"<<endl;
    for(int i=0;i<3;i++){
        cout<<array_two[i];
    }
    double *left = array_one;
    double *right = array_two;
    double * swap = left;
    left = right;
    right = swap;
    cout<<endl;
    cout<<"After interchaning,Arrays are:-"<<endl;
    cout<<"Array 1"<<endl;
        for(int i=0;i<3;i++){
        cout<<array_one[i];
    }
    cout<<endl;
    cout<<"Array 2"<<endl;
    for(int i=0;i<3;i++){
        cout<<array_two[i];
    }

    return 0;
}

