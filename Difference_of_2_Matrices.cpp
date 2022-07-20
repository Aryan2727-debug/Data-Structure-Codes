#include <iostream>

using namespace std;

int main()
{
    int m1[2][2] = { {10,4} , {2,3} };
    int m2[2][2] = { {5,6} , {7,8} };
    int sum[2][2];
    cout<<"The 1st Matrix is"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<m1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"The 2nd Matrix is"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<m2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The Difference Matrix is"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            sum[i][j] = m1[i][j] - m2[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
