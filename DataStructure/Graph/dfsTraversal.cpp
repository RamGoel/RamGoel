
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



void dfsTraversal(int node,vector<int> adj[],vector<int> &vistArr){

        cout<<node<<" ";
        vistArr[node]=1;

        for(auto it:adj[node]){
            if(vistArr[it]==0){
                dfsTraversal(it,adj,vistArr);
            }
        }


}


void dfsDriver(vector<int> adj[],int totNodes){

    vector<int> vistArr(totNodes+1,0);

    for(int i=1;i<=totNodes;i++){
        if(vistArr[i]==0){

            dfsTraversal(i,adj,vistArr);
        }
    }
}

int main(){


    int totNodes;
    cout<<"How many Nodes in Graph ";
    cin>>totNodes;
    vector<int> adj[totNodes+1];

    createList(adj,totNodes);

    dfsDriver(adj,totNodes);


}



