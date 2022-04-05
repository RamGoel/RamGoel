#include<iostream>
#include<vector>

using namespace std;

void createList(vector<int> adj[],int totNodes){
    for(int i=1;i<=totNodes;i++){

        cout<<"How many Adjacent Nodes of "<<i<<": ";
        int adjNodes;
        cin>>adjNodes;

        for(int j=1;j<=adjNodes;j++){
            int adjNode;
            cout<<"Enter Adjacent Node for "<<i<<": ";
            cin>>adjNode;

            adj[i].push_back(adjNode);


        }


    }
}



void printList(vector<int> adj[],int totNodes){
    for(int i=1;i<=totNodes;i++){
        cout<<"Adjacent Nodes of "<<i<<" are ";
        for(auto it:adj[i]){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}

int main(){


    int totNodes;
    cout<<"How many Nodes in Graph ";
    cin>>totNodes;
    vector<int> adj[totNodes+1];

    createList(adj,totNodes);

    printList(adj,totNodes);
}
