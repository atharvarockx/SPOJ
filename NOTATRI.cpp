#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n,i;
	cin>>n;
	while(n!=0){
		int arr[n],ans=0;
		for(i=0;i<n;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		for (i=n-1;i>=2;i--){
			int beg=0,last=i-1;
			while(beg<last){
				if (arr[beg]+arr[last]<arr[i]){
					ans+=last-beg;
					beg=beg+1;
				}
				else{
					last=last-1;
					
				}
			}
		}
		cout<<ans<<endl;
		cin>>n;
	}
	return 0;
}
