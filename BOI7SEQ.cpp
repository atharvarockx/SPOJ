#include<bits/stdc++.h>

using namespace std;
typedef long long LL;

LL max ( LL a , LL b ) {
	return a > b ? a : b;
}

int main(){
	LL n;
	cin>>n;
	LL a[n];
	cin>>a[0];
	LL x=a[0];
	LL sum=0;
	for(LL i=1;i<n;i++){
		cin>>a[i];
		sum+=max(x,a[i]);
		x=a[i];
	}
		
	cout<<sum;
	return 0;
}
