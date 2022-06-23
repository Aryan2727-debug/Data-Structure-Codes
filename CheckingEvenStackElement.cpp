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
    int getProduct(){
        if(top==-1){
            cout<<"The Stack is empty"<<endl;
            return -1;
        }
        int product=1;
        for(int i=0;i<n;i++){
            product=product*arr[i];
        }
        return product;
    }
    bool checkEven(int i){
        if(top==-1){
            cout<<"The Stack is empty"<<endl;
            return false;
        }
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                return true;
            }else{
                return false;
            }
        }
    }
};
int main()
{
    cout<<"The Stack is"<<endl;
    Stack s;
    s.push(10);
    s.push(40);
    s.push(20);
    s.push(30);
    if(s.checkEven(30)){
        cout<<"The element is even"<<endl;
    }else{
        cout<<"The element is odd"<<endl;
    }
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