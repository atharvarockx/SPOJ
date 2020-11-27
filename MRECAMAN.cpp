#include<bits/stdc++.h>
using namespace std;
set <long long > s;
long long  arr[500001];
void calc(){
	arr[0]=0;
	s.insert(0);
	for(int i=1;i<500001;i++){
		
		if(arr[i-1]-i>0 && s.find(arr[i-1]-i)==s.end()){
			arr[i]=arr[i-1]-i;
		}
		else{
			arr[i]=arr[i-1]+i;
		}
		s.insert(arr[i]);	
	}
}
int main(){
	
	calc();
	int n;
	cin>>n;
	while(n!=-1){

		cout<<arr[n];
		cout<<endl;
		cin>>n;
	}
	
	return 0;
}
