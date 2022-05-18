#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
#define N 5
using namespace std;

int adj_mat[N][N];
int visited[]={0};

void read_graph(){
    int option;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j){
                adj_mat[i][j]=0;
            }
            if(i!=j){
                adj_mat[i][j]=1;
            }else{
                adj_mat[i][j]=0;
            }
        }
    }
}
int build_graph(){
    int deg;
    cout<<"The Adjacency Matrix is"<<endl;
    read_graph();
    for(int i=0;i<N;i++){
        cout<<i<<endl;
    }
    for(int i=0;i<N;i++){
        cout<<i<<endl;
        for(int j=0;j<N;j++){
            cout<<adj_mat[i][j]<<endl;
            if(adj_mat[i][j]) deg++;
        }
    }
    cout<<"The number of Edges in the Graph are "<<deg/2<<endl;
    return -1;
}
void DFS(int i){
    cout<<i<<endl;
    visited[i]=1;
    for(int j=0;j<N;j++){
        if(!visited[j] && adj_mat[i][j]==1){
            DFS(j);
        }
    }
}
int minKey(int key[], bool mstSet[])
{
    
    int min = INT_MAX, min_index;
 
    for (int v = 0; v < N; v++)
        if (mstSet[v] == false && key[v] < min)
            min = key[v], min_index = v;
 
    return min_index;
}

void printMST(int parent[],int adj_mat[N][N]){
    cout<<"Edge \tWeight\n";
    for (int i=1;i<N;i++){
        cout<<parent[i]<<" - "<<i<<" \t"<<adj_mat[i][parent[i]]<<" \n";
    }
}
void primMST(int adj_mat[N][N]){
    int parent[N];
    int key[N];
    bool mstSet[N];
    for(int i=0;i<N;i++){
        key[i]=INT_MAX,mstSet[i]=false;
    }
    key[0]=0;
    parent[0]=-1;
    for(int count=0;count<N-1;count++){
        int u=minKey(key,mstSet);
        mstSet[u]=true;
        for(int v=0;v<N;v++){
            if (adj_mat[u][v] && mstSet[v] == false && adj_mat[u][v] < key[v]){
                parent[v] = u, key[v] = adj_mat[u][v];
            }
        }
    }
    printMST(parent,adj_mat);
}
int main()
{
    int reply;
    build_graph();
    cout<<"After performing Depth First Search on the Graph from the 0th Vertex."<<endl;
    DFS(0);
        int adj_mat[N][N] = { { 0, 2, 0, 6, 0 },
                        { 2, 0, 3, 8, 5 },
                        { 0, 3, 0, 0, 7 },
                        { 6, 8, 0, 0, 9 },
                        { 0, 5, 7, 9, 0 } };
    primMST(adj_mat);

    return 0;
}
