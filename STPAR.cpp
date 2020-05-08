//#include<bits/stdc++.h>
#include<iostream>
#include<stack>
using namespace std;

int main(){
	int n;
	cin>>n;
	while(n!=0){
		stack<int> st,st1,st2;
		int a[n];
		for (int i=1;i<=n;i++){
			cin>>a[i];
		}
		for(int i=n;i>=1;i--)
			st.push(a[i]);
		int j=1;
		for(int i=1;!st.empty();i++){
			if(!st.empty() && st.top()==j){
				st2.push(st.top());
				j++;
				st.pop();
			}
			else if(!st1.empty() && st1.top()==j  ){
				st2.push(st1.top());
				st1.pop();
				j++;
			}
			else{
				st1.push(st.top());
				st.pop();
			}
		}
		while(!st1.empty()){
			st2.push(st1.top());
			st1.pop();
		}
		int k=n,f=0;
		while(!st2.empty()){
			if(st2.top()==k)
				k=k-1;
			else{
				f=1;
				break;
			}
			st2.pop();
		}
		if(f==0)
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
		cin>>n;
	}
	return 0;
}
