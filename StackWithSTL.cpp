#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(30);
    s.push(21);
    s.push(56);
    s.push(78);
    s.pop();
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}