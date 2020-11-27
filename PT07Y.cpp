#include <bits/stdc++.h>
using namespace std;
class Graph{
  int V;
  list<int>*adj;
  bool cyclic(int v,bool visited[],int parent);
  public:
  Graph(int V);
  void addEdge(int v,int w);
  bool cycle();
};
Graph::Graph(int V){
  this->V=V;
  adj = new list<int>[V+1]; 
}

void Graph::addEdge(int v,int w){
  adj[v].push_back(w);
  adj[w].push_back(v);
}

bool Graph::cyclic(int v,bool visited[],int parent){
  visited[v]=true;
  list<int>:: iterator i;
  
  for(i=adj[v].begin();i!=adj[v].end();i++){
     if (!visited[*i]) {
        if(cyclic(*i, visited,v))
          return true;
     }
     else if(*i!=parent)
      return true;
            
  }
  return false;
}

bool Graph::cycle(){
  bool *visited=new bool[V+1];
  for(int i=1;i<=V;i++)
    visited[i]=false;
  // int count=0;
    if(cyclic(1,visited,-1))
        return false;
  
  for (int i = 1; i <= V; i++) 
        if (!visited[i]) 
           return false; 
  
    return true; 
}
int main()
{
  //write your code here
  int t,n,e,u,v;
    cin>>n>>e;
    Graph g(n);
    for(int i=0;i<e;i++){
      cin>>u>>v;
      g.addEdge(u,v);
    }
    // cout<<g.size()<<" "<<n-1<<endl;
    if(g.cycle()==true)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  
  return 0;
}
