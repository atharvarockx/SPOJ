#include<bits/stdc++.h>

using namespace std;
int main(){
	long long int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		long long int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		int mid=a[n/2];
		int count=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]==mid)
				count++;
		}
		if(count>(n/2))
			cout<<"YES "<<mid<<endl;
		else
			cout<<"NO"<<endl; 
	}
}
