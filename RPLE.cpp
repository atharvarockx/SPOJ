#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
	
	
	long long int t,n,r,i,j,a,b;
	cin>>t;
	int k=1;
	while(t--){
		cin>>n>>r;
		long long int a1[1010]={0},a2[1010]={0};
		for(i=0;i<r;i++){
			cin>>a>>b;
			a1[a]=1;
			a2[b]=1;
		}
		
		int f=0;
		for(i=0;i< n;i++){
			
			if(a1[i]==1 && a2[i]==1){
				f=1;
				// break;
			}

		}
		if(f==1)
			cout<<"Scenario #"<<k<<": spied";
		else
			cout<<"Scenario #"<<k<<": spying";
		k++;
		cout<<endl;
	}
	return 0;
}
