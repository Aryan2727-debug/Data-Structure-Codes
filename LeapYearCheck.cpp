#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
  int year;
  cout<<"Enter a year"<<endl;
  cin>>year;
  if(year%4==0){
    if(year%100==0)
    {
        if(year%400==0)
        {
            cout<<"Leap Year";
        }
        else{
            cout<<"Not a Leap Year";
  }
    }
    else{
        cout<<"Leap Year";
    }
  }
  else{
    cout<<"Not a Leap Year";
  }
   return 0;
}