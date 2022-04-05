#include<iostream>
#include<vector>


using namespace std;

void createList(int totNodes,vector<int> adj[]){

    for(int i=1;i<=totNodes;i++){{
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



}


int isEmpty(vector<int> Q){
    if(Q.size()<=0){
        return 1;
    }
    return 0;
}



void bfsTraverse(int totNodes,vector<int> adj[],vector<int> &vistArr){

    vector<int> Q;

    for(int i=1;i<=totNodes;i++){
        Q.push_back(i);
        vistArr[i]=1;

        while(isEmpty(Q)==0){
            int node=Q.front();
            Q.erase(Q.begin());
            cout<<node<<" ";

            for(auto it:adj[node]){
                if(vistArr[it]==0){
                    Q.push_back(it);
                    vistArr[it]=1;
                }
            }
        }
    }

}


void bfsDriver(int totNodes,vector<int> adj[]){

    vector<int> vistArr(totNodes+1,0);
    for(int i=0;i<totNodes;i++){
        if(vistArr[i]==0){
            bfsTraverse(i,adj,vistArr);
        }
    }


}



void dfsTraverse(int node,int totNodes,vector<int> adj[],vector<int> &vistArr){


    cout<<node<<" ";
    vistArr[node]=1;



    for(auto tr:adj[node]){
        if(vistArr[tr]==0){
            dfsTraverse(tr,node,adj,vistArr);
        }
    }

}


void dfsDriver(int totNodes,vector<int> adj[]){

    vector<int> vistArr(totNodes+1,0);

    for(int i=1;i<=totNodes;i++){
        if(vistArr[i]==0){
            dfsTraverse(i,totNodes,adj,vistArr);
        }
    }

}



void shortestPath(int totNodes,int source,vector<int> adj[]){


    vector<int> dist(totNodes+1, INT_MAX);
    vector<int> Q;

    Q.push_back(source);
    dist[source]=0;


    while(isEmpty(Q)==0){
        int node=Q.front();
        Q.erase(Q.begin());

        for(auto iter:adj[node]){
            if(dist[node]+1<dist[iter]){

                dist[iter]=dist[node]+1;
                Q.push_back(iter);
            }
        }

    }


    for(int i=1;i<=totNodes;i++){
        cout<<dist[i]<<" ";
    }
}

//Driver Code
int main(){

    int totNodes;
    cout<<"How many Nodes: ";
    cin>>totNodes;

    vector<int> adj[totNodes+1];

    int T=100;


    createList(totNodes,adj);

    while(T--){
        cout<<"\nEnter 1 for bfsTraversal & 2 for dfsTraversal & 3 for shortestPath: ";
    int choice;
    cin>>choice;


    if(choice==1){
        bfsDriver(totNodes,adj);
    }else if(choice==2){
        dfsDriver(totNodes,adj);
    }else if(choice==3){
        shortestPath(totNodes,1,adj);
    }else{
        break;
        }
    }




}
