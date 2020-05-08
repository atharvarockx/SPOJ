#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int n,k;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>k;
	int mx=0;
	for(int i=0;i<k-1;i++){
		mx=max(a[i],a[i+1]);
	}
	cout<<mx<<" ";
	for(int i=k;i<n;i++){
		int m=max(mx,a[i]);
		cout<<m<<" ";
		mx=m;
	}
//	cout<<mx;
	return 0;
}
