#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int n,b,t;
	cin>>t;
	while(t--){

		cin>>n>>b;
		int a[n];
		for(ll i=0;i<n;i++)
			cin>>a[i];
		ll max=0,Max=0,Count=0,count=0;
		int j=0;
		
		for(int i=0;i<n;i++){
			if(max+a[i]<=b){
				max+=a[i];
				count++;
			}
			else{
				while(max+a[i]>b){
					max-=a[j];
					j++;
					count--;
				}
				max+=a[i];
				count++;
			}
			if((count>Count) || (count == Count && max>Max)){
				Max=max;
				Count=count;
			}
		}
		cout<<Max<<" "<<Count<<endl;
			
	}
	return 0;
}
