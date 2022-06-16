#include <iostream>
#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main()
{
    queue<int> q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    
    queue<int> q2;
    q2.push(150);
    q2.push(160);
    q2.push(170);
    q2.push(180);
    
    
    q1.swap(q2);
    cout<<"After swapping, the Queues are"<<endl;
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<endl;
    while(!q2.empty()){
        cout<<q2.front()<<" ";
        q2.pop();
    }
    return 0;
}