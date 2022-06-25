#include <iostream>
#include <bits/stdc++.h>
#include <stack>
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
    int getMax(){
        if(top==-1){
            cout<<"The Stack is empty"<<endl;
            return -1;
        }
        return *max_element(arr,arr+n);
    }
};
int main()
{
    Stack s;
    s.push(10);
    s.push(50);
    s.push(30);
    s.push(40);
    cout<<"The Stack is"<<endl;
    cout<<s.print()<<endl;
    s.pop();
    cout<<s.print()<<endl;
    s.pop();
    cout<<s.print()<<endl;
    s.pop();
    cout<<s.print()<<endl;
    s.pop();
    cout<<endl;
    s.pop();
    cout<<endl;
    s.push(10);
    s.push(50);
    s.push(30);
    s.push(40);
    cout<<"The maximum element in the Stack is = "<<s.getMax()<<endl;
    return 0;
}