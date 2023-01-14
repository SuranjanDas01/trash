//Here we will create two graphs which are weighted
#include<iostream>
#include<vector>
using namespace std;

void createAdjacencyMatrix(int totalNodes, int totalEdges){
    //A matrix using vectors
    vector<vector<int>> adjMatrix(totalNodes+1,vector<int>(totalNodes+1,0)); //1 based indexing
    for(int i=0;i<totalEdges;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        adjMatrix[u][v]=wt; //At indexes, we store weights rather than 1
        adjMatrix[v][u]=wt;
    }

    cout<<"Printing your edges:\n";
    for(int i=1;i<=totalNodes;i++){
        for(int j=1;j<=totalEdges;j++){
            if(adjMatrix[i][j]){
                cout<<"Edge from "<<i<<" to "<<j<<" with weight "<<adjMatrix[i][j]<<endl;
            }
        }
    }
}

void createAdjacencyList(int totalNodes,int totalEdges){
    //We store as {dest_node,weight} into the vector of source node
    vector<pair<int,int>> adjList[totalNodes+1];
    for(int i=0;i<totalEdges;i++){
        int u,v,wt;
        cin>>u>>v>>wt;
        adjList[u].push_back({v,wt}); //If directed, only write this line
        adjList[v].push_back({u,wt});
    }

    cout<<"Printing your edges:\n";
    for(int i=1;i<=totalNodes;i++){
        for(auto x:adjList[i]){
            cout<<"Edge from "<<i<<" to "<<x.first<<" with weight "<<x.second<<endl;
        }
    }
}


int main(){
    int totalNodes,totalEdges;
    cout<<"Enter total number of nodes: ";
    cin>>totalNodes;
    cout<<"Enter total number of edges: ";
    cin>>totalEdges;
    cout<<"Creating your adjacency list:\n";
    createAdjacencyList(totalNodes,totalEdges);
    cout<<"\n\nCreating your adjacency matrix\n";
    createAdjacencyMatrix(totalNodes,totalEdges);
}