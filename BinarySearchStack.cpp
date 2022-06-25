#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
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
    void findElement(int x){
        if(top==-1){
            cout<<"The Stack is empty"<<endl;
            return;
        }
        if(binary_search(arr,arr+n,x)){
            cout<<x<<" is present in the Stack"<<endl;
        }else{
            cout<<x<<" is not present in the Stack"<<endl;
        }
    }
};
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<"The Stack is"<<endl;
    cout<<s.print()<<" ";
    s.pop();
    cout<<s.print()<<" ";
    s.pop();
    cout<<s.print()<<" ";
    s.pop();
    cout<<s.print()<<" ";
    s.pop();
    cout<<endl;
    s.pop();
    
    cout<<endl;
    
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    int n;
    cout<<"Enter the element you want to find in the Stack"<<endl;
    cin>>n;
    s.findElement(n);
    return 0;
}