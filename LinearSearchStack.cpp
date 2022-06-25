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
    int linear_search(int ele){
        for(int i=0;i<n;i++){
            if(arr[i]==ele)
            return i;
        }
        return -1;
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
    cout<<"Enter the element you want to search in the Stack"<<endl;
    cin>>n;
    int index=s.linear_search(n);
    cout<<"The element is present at "<<index<<" position."<<endl;
    return 0;
}