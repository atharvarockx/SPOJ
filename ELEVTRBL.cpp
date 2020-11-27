#include<bits/stdc++.h>
using namespace std;
struct node{
	int num;
	int count;
	node(int n,int c){
		num=n;
		count=c;
	}
	
};
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a; 
    return gcd(b, a % b);  
      
} 
void bfs(int f,int s,int g,int u,int d){
	
	bool visited[1000001]={false};
	queue<node> q;
	q.push(node(s,0));
	int i=-1;
	while(!q.empty()){
		node t=q.front();
		q.pop();
		if(t.num==g){
			i=t.count;
			break;
		}
		if(t.num+u<=f && visited[t.num+u]==false){
			visited[t.num+u]=true;
			q.push(node(t.num+u,t.count+1));
//			cout<<t.num+u<<" "<<t.count+1<< " up "<<endl;
		}
			
		if(t.num-d>=1 && visited[t.num-d]==false){
			visited[t.num-d]=true;
			q.push(node(t.num-d,t.count+1));
//			cout<<t.num-d<<" "<<t.count+1 << " down"<<endl;
		}
			
		
	}
		
	if(i==-1) 
		cout<<"use the stairs"<<endl;
	else 
		cout<<i<<endl;
}


int main(){
	int f,s,g,u,d;
	cin>>f>>s>>g>>u>>d;
	bfs(f,s,g,u,d);	
	
}
