

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


int isEmpty(vector<int> Q){
    if(Q.size()<=0){
        return 1;
    }

    return 0;
}


void shortestPath(int source,vector<int> adj[],int totNodes){

    vector<int> Q;
    vector<int> dist(totNodes+1 ,INT_MAX);

    dist[source]=0;
    Q.push_back(source);


        while(isEmpty(Q)==0){
            int node=Q.front();
            Q.erase(Q.begin());

            for(auto it:adj[node]){
                if(dist[node]+1<dist[it]){
                    dist[it]=dist[node]+1;
                    Q.push_back(it);
                }
            }
        }

    for(int i=1;i<=totNodes;i++){
        cout<<dist[i]<<" ";
    }



}


int main(){


    int totNodes;
    cout<<"How many Nodes in Graph ";
    cin>>totNodes;
    vector<int> adj[totNodes+1];
    createList(adj,totNodes);

    shortestPath(1,adj,totNodes);



}
