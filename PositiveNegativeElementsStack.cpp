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
    void checkPositiveNegative(){
        if(top==-1){
            cout<<"The Stack is empty"<<endl;
            return;
        }
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                cout<<arr[i]<<" is positive."<<endl;
            }else{
                cout<<arr[i]<<" is negative."<<endl;
            }
        }
    }
};
int main()
{
    Stack s;
    s.push(23);
    s.push(-30);
    s.push(67);
    s.push(-10);
    s.checkPositiveNegative();
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