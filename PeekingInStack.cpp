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
    int peek(int i){                      //checking for an element in the Stack
        
        int a=arr[i];
        return a;
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
    int i;
    cout<<"Enter the position you want to Peek in the Stack"<<endl;
    cin>>i;
    cout<<"The "<<i<<" position element in the Stack is = "<<s.peek(i)<<endl;
    cout<<s.print()<<endl;
    s.pop();
    cout<<s.print()<<endl;
    s.pop();
    cout<<s.print()<<endl;
    s.pop();
    cout<<s.print()<<endl;
    
    return 0;
}