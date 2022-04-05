#include<iostream>
#include<vector>
using namespace std;


void printGraph(vector<int> adj[],int totNodes){
    cout<<"Adjacency List is :";
    for(int i=1;i<=totNodes;i++){
        cout<<"Element at "<<i<<" are: ";
        for(auto it=adj[i].begin();it!=adj[i].end();it++){
            cout<<*it<<" ";
        }
        cout<<"\n";
    }

}
int main(){

    cout<<"*********Graph Adjacency List C++**********";
    int nodes;
    cout<<"\nHow many Nodes/Vertex: ";
    cin>>nodes;
    vector<int> adj[nodes+1];

    for(int i=1;i<=nodes;i++){
        int node;
        cout<<"\nEnter Node: ";
        cin>>node;

        int choice;
        cout<<"\nHow many adjacent Nodes: ";
        cin>>choice;

        if(choice!=0){
            for(int j=1;j<=choice;j++){
                int adjNode;
                cout<<"\nEnter Adjacent Node: ";
                cin>>adjNode;
                adj[node].push_back(adjNode);
            }
        }
    }


    printGraph(adj,nodes);

}
