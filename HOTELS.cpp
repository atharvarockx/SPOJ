#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){
	ll n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	ll sum=0,max=0,j=0;
	for(int i=0;i<n;i++){
		if(sum+a[i]<=m)
			sum=sum+a[i];
		else{
			while(sum+a[i]>m)
			{
				sum-=a[j];
				j++;
			}
			sum+=a[i];
		}
		if(sum>max)
			max=sum;
	}
	cout<<max;
	return 0;
}
