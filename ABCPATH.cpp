#include<bits/stdc++.h>
using namespace std;
int h=51,w=51;
char a[51][51]={'0'};
bool inside(int x,int y){
	if(x<h && y<w)
		return true;
	return false;
}
int mx=0;
int dfs(int i,int j,char a[][51],bool visited[][51],int count){
	visited[i][j]=true;
	int dy[] = {0, 0, -1, 1, 1, -1, 1, -1};
    int dx[] = {-1, 1, 0, 0, 1, 1, -1, -1};
	char ch=a[i][j]+1;
	if(count>mx)
		mx=count;
	for(int k=0;k<8;k++){
		int x=i+dx[k];
		int y=j+dy[k];
		if(inside(x,y) && a[x][y]!='0'&& a[x][y]==ch && visited[x][y]==false ){
			visited[x][y]=true;
			dfs(x,y,a,visited,count+1);
		}	
	}
	return mx;
	
}


int main(){	
	cin>>h>>w;
	char z;
	int num=1;
	while(h!=0 && w!=0){
		vector <pair<int ,int> > v;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				cin>>z;
				a[i][j]=z;		
				if(a[i][j]=='A')
					v.push_back(make_pair(i,j));
			}
		}
		vector <pair<int ,int> >::iterator it;
		int max=0;
		for(it=v.begin();it!=v.end();it++){
			bool visited[51][51]={false};
			mx=0;
			int x=dfs(it->first,it->second,a,visited,1);
			if(x>max)
				max=x;
		}
		cout<<"Case "<<num<<": "<< max<<endl;
		num++;
		cin>>h>>w;
	}
	
	return 0;
}
