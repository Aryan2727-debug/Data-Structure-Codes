#include <iostream>
#include <bits/stdc++.h>
#define V 4
#define INF 9999
using namespace std;

void printSolution(int dist[][V]);

void floydWarshall(int graph[][V]){
    int dist[V][V];
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            dist[i][j]=graph[i][j];
        }
    }
    for(int k=0;k<V;k++){
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(dist[i][j] > (dist[i][k] + dist[k][j]) && (dist[i][k]!=INF) && (dist[k][j]!=INF)){
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    printSolution(dist);
}

void printSolution(int dist[][V]){
    cout<<"The following is a Matrix after performing Floyd Warshall Algorithm"<<endl;
    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            if(dist[i][j]==INF){
                cout<<"INF"<<"	 ";
            }else{
                cout<<dist[i][j]<<"	 ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int graph[V][V] = { { 0, 5, INF, 10 },
						{ INF, 0, 3, INF },
						{ INF, INF, 0, 1 },
						{ INF, INF, INF, 0 } };
	floydWarshall(graph);
    return 0;
}