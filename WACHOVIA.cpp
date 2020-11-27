#include<bits/stdc++.h>

using namespace std;

int knapsack(int wt[],int v[],int n,int w){
	
	int k[n+1][w+1];
	
	for(int i=0;i<=n;i++){
		for(int j=0;j<=w;j++){
			if(i==0||j==0)
				k[i][j]=0;
			else if(wt[i-1]<=j){
				k[i][j]=max(v[i-1]+k[i-1][j-wt[i-1]],k[i-1][j]);
			}
			else
				k[i][j]=k[i-1][j];
		}
	}
	return k[n][w];
}


int main(){
	int t,w,n,x,y;
	cin>>t;
	while(t--){
		cin>>w>>n;
		int weight[n],val[n];
		for(int i=0;i<n;i++){
			cin>>weight[i]>>val[i];
		}
		cout<<"Hey stupid robber, you can get "<<knapsack(weight,val,n,w)<<"."<<endl;
	}
	return 0;
}
