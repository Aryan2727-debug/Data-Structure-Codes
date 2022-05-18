#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
void fun(){
    for(int i=0;i<10;i++){
        
    }
}
int main()
{
    clock_t start,end;
    start=clock();
    fun();
    end=clock();
    double time_value=double(end-start)/double(CLOCKS_PER_SEC);
    cout<<"The Time Taken is :"<<fixed<<time_value<<setprecision(5)<<"seconds"<<endl;
    return 0;
}

