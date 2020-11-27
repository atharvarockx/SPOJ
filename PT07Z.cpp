#include <bits/stdc++.h>
using namespace std;

class Graph{
  int V;
  int max;
  int maxNode;
  list<int>*adj;
  public:
  Graph(int V);
  void addEdge(int u,int w);
  void DFS(int v,bool visited[],int count);
  int count();
  
};

Graph::Graph(int V){
  this->V=V;
  adj=new list<int>[V+1];
}

void Graph::addEdge(int u,int w){
  adj[u].push_back(w);
  adj[w].push_back(u);
}

void Graph::DFS(int v,bool visited[],int d){
  visited[v]=true;
  list<int>::iterator i;
  if(d>max){
    max=d;
    maxNode=v;
  }
  for(i=adj[v].begin();i!=adj[v].end();i++){
    if(visited[*i]==false){
      DFS(*i,visited,d+1);
    }
  }
}

int Graph::count(){
  bool visited[V+1];
  for(int i=0;i<=V;i++){
    visited[i]=false;
  }
  max=0;
  DFS(1,visited,0);  
  for(int i=0;i<=V;i++){
    visited[i]=false;
  }
  max=0;
  DFS(maxNode,visited,0);
  // cout<<max<<endl;
  return max;
}
int main()
{
  //write your code here
  int t,n,m,u,v;

    cin>>n;
    Graph g(n);
    for(int i=0;i<n-1;i++){
      cin>>u>>v;
      g.addEdge(u,v);
    }
    // g.count();
    
    cout<<g.count()<<endl;
  
  return 0;
}
