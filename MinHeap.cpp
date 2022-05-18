#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue < int,vector<int>,greater<int> > pq;    //Using a Priority Queue
    pq.push(5);
    pq.push(1);
    pq.push(10);
    pq.push(30);
    pq.push(20);
    cout<<"The Min-Heap is"<<endl;
    while(pq.empty()==false){       //one by one extract items from Min-Heap
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}

