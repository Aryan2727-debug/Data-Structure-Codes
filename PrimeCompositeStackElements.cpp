#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int n=4;
class Stack{
    int *arr;
    int top;
    public:
    Stack(){
        arr=new int[n];
        top=-1;
    }
    void pop(){
        if(top==-1){
            cout<<"The Stack is empty"<<endl;
            return;
        }
        top--;
    }
    void push(int x){
        if(top==n-1){
            cout<<"The Stack is full"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    int print(){
        if(top==-1){
            cout<<"The Stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool isPrime(int x){
        int divisor=2;
        while(divisor<=x-1){
            if(x%divisor==0){
                return false;
            }
            divisor++;
        }
        return true;
    }
};
int main()
{
    Stack s;
    s.push(23);
    s.push(30);
    s.push(67);
    s.push(10);
    int n;
    cout<<"Enter the element you want to check for Prime or Composite"<<endl;
    cin>>n;
    if(s.isPrime(n)){
        cout<<"Prime Number"<<endl;
    }else{
        cout<<"Composite Number"<<endl;
    }
    cout<<"The Stack is"<<endl;
    cout<<s.print()<<endl;
    s.pop();
    cout<<s.print()<<endl;
    s.pop();
    cout<<s.print()<<endl;
    s.pop();
    cout<<s.print()<<endl;
    s.pop();
    s.pop();
    return 0;
}