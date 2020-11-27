#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int i=0,j=n-1,c=1,ans=0;
	while(i!=j){
		if(a[i]<=a[j]){
			ans+=a[i]*c;
			i++;
		}
		else{
			ans+=a[j]*c;
			j--;
		}
		c++;
	}
	ans+=a[i]*c;
	cout<<ans;
	
	return 0;
}
