#include<bits/stdc++.h>

using namespace std;

void DFS(int v,vector<int>  *adj,bool visited[]){
	visited[v]=true;
	vector<int>::iterator it;
	for(it=adj[v].begin();it!=adj[v].end();it++){
		if(visited[*it]==false)
			DFS(*it,adj,visited);
	}
}

int count(vector<int>  *adj,int n){
	int c=0;
	bool visited[n]={false};
	for(int i=0;i<n;i++){
		if(visited[i]==false){
			DFS(i,adj,visited);
			c++;
		}
	}
	return c;
}

int main(){
	int t,n,e,u,v;
	cin>>t;
	while(t--){
		cin>>n>>e;
		vector<int> adj[n];
		for(int i=0;i<e;i++){
			cin>>u>>v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		cout<<count(adj,n)<<endl;
	}
	return 0;
}
