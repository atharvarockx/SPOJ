#include<bits/stdc++.h>
using namespace std;
int dp[10001];
int main(){
	int n,k;
	cin>>n>>k;
	int a[n],b[n],a1[n],b1[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		a1[i]=a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
		b1[i]=b[i];
	}
	
	long long int ans=0;
	
	int pos;
	for(int i=1;i<n;i++){
		a1[i]=min(a1[i-1]+a[i],b1[i-1]+a[i]+b[i]);  // make L
    	b1[i]=min(b1[i-1]+b[i],a1[i-1]+b[i]+a[i]);
    	if(a1[i]>k && b1[i]>k)
       	{
         	pos=i-1;

           ans=min(a1[i-1],b1[i-1]);
           break;
       }
       ans=min(a1[i],b1[i]);
       pos=i;
	}
		
//		cout<<dp[i]<<endl;
//		ppl+=dp[i];
	cout<<endl;
	cout<<pos-1<<" "<<ans;
	return 0;
}
