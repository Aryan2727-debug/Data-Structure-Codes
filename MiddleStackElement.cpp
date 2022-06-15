#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#define n 100
using namespace std;
class Stack{
    int top;
    int *arr;
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
    
    int peek(int i){
        if(top==-1){
            cout<<"The Stack is empty"<<endl;
            return -1;
        }
        return arr[i];
    }
    
    int printMiddle(){
        int len = sizeof(arr)/sizeof(arr[0]);
        if(top==-1){
            cout<<"The Stack is empty"<<endl;
            return -1;
        }
        return arr[len/2];
    }
};
int main()
{
    cout<<"The Stack is"<<endl;
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    int i;
    cout<<"Enter the position of the element you want to print"<<endl;
    cin>>i;
    cout<<"The element at "<<i<<" position is = "<<s.peek(i)<<endl;
    cout<<"The middle element in the Stack is = "<<s.printMiddle()<<endl;
    cout<<s.print()<<endl;
    s.pop();
    cout<<s.print()<<endl;
    s.pop();
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