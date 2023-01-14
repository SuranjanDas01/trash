#include<iostream>
#include<vector>
using namespace std;

int main(){
    //Let n be number of nodes and e be number of edges
    //We create a directed graph here
    int n,e;
    cout<<"Enter number of nodes: ";
    cin>>n;
    cout<<"Enter number of edges: ";
    cin>>e;
    vector<int> adjList[n+1];//Array of vectors
    for(int i=0;i<e;i++){
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v); //If undirected also write adjList[v].push_back(u)
    }

    cout<<"Your edges are :\n";
    for(int i=1;i<=n;i++){
        for(auto x:adjList[i]){
            cout<<"Edge from "<<i<<" to "<<x<<endl;
        }
    }
}