#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli dp[100001];
int main(){
	lli t,n;
	cin>>t;
	for(int j=1;j<=t;j++){
		cin>>n;
		lli arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		dp[0]=arr[0];
		dp[1]=max(arr[0],arr[1]);
		for(int i=2;i<n;i++){
			dp[i]=max(dp[i-2]+arr[i],dp[i-1]);
		}
		cout<<"Case "<<j<<": "<<dp[n-1]<<endl;
		
	}
	
	return 0;
}
