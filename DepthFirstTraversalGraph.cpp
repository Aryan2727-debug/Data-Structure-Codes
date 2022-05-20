#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define N 3                //size of the Matrix
using namespace std;

int adj_mat[N][N];         //initialising the Adjacency Matrix
int visited[N]={0};

void read_graph(){        //function to insert 1's and 0's in the Matrix
    int reply;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j){
                adj_mat[i][j]=0;
                continue;
            }
            if(i!=j){
                adj_mat[i][j]=1;
            }
            else{
                adj_mat[i][j]=0;
            }
        }
    }
}
int build_graph(){      //function to print the Matrix
    int deg=0;
    read_graph();
    cout<<" The Adjacency Matrix is"<<endl;
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
    cout<<"Total number of Edges in the Graph are "<<deg/2<<endl;
    return 1;
}
void DFT(int i){                          //Creating a function for Depth First Traversal
    cout<<i<<endl;
    visited[i]=1;
    for(int j=0;j<N;j++){
        if(!visited[j] && adj_mat[i][j]==1){
            DFT(j);
        }
    }
}
int main()
{
    int option;
    cout<<"A program to read a simple Graph using Adjacency Matrix"<<endl;
    build_graph();
    cout<<"Depth First Traversal of Graph starting from vertex 0 is :"<<endl;
    DFT(0);
    return 0;
}


