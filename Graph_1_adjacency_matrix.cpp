#include<iostream>
#include<vector>
using namespace std;

int main(){
    //Let n be number of nodes and e be number of edges
    int n,e;
    cout<<"Enter number of Nodes:";
    cin>>n;
    cout<<"Enter number of edges: ";
    cin>>e;
    //If at any index 0 is stored means no edge and if 1 is stored means there is an edge
    vector<vector<int>> adjMatrix(n+1,vector<int>(n+1,0)); //We want 1 based indexing and nodes number from 1
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adjMatrix[u][v]=1;
        adjMatrix[v][u]=1; //If the graph is undirected then use this otherwise if the graph is directed only write adj[u][v]
    }

    cout<<"Your edges include with nodes as follows:\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(adjMatrix[i][j]){ //If the value stored is 1, means there is an edge from i to j
                cout<<"Edge from "<<i<<" to "<<j<<endl;
            }
        }
    }
    return 0;
}