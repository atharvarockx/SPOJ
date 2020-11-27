#include<bits/stdc++.h>
using namespace std;
int n=250,m=250;
//int a[250][250]={-1};

bool inside(int x,int y){
	if(x<n && y<m)
		return true;
	return false;
}
int dfs(int i,int j,int a[250][250],bool visited[][250],int count){
	visited[i][j]=true;
	int dy[] = {0, 0, -1, 1};
    int dx[] = {-1, 1, 0, 0};
	for(int k=0;k<4;k++){
		int x=i+dx[k];
		int y=j+dy[k];
		if(inside(x,y) && a[x][y]!=-1 && visited[x][y]==false && a[x][y]==1){
//			visited[x][y]=true;
			count= dfs(x,y,a,visited,count+1);
		}	
	}
	return count;
	
}

int main(){
	int n,m;
	cin>>n>>m;
	while(n!=0 && m!=0){
		int a[250][250]={-1};
		bool visited[250][250]={false};
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
//		bool visited[n][m]={false};
		map<int,int> mp;
		int d=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(!visited[i][j] && a[i][j]==1){
					int c=dfs(i,j,a,visited,1);
					mp[c]++;
					d++;
				}
					
			}
		}
		map<int,int>::iterator it;
		cout<<d<<endl;
		for(it=mp.begin();it!=mp.end();it++){
			cout<<it->first<<" "<<it->second<<endl;
		}
		cin>>n>>m;
	}
	
	return 0;
}
