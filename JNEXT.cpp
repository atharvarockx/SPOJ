#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
typedef long long ll;

int main(){
	int t,n;
	cin>>t;
	while(t--){
		vector<int>v,v1;
		stack<int>st;
		int x;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>x;
			st.push(x);
		}
		int z;
		while(!st.empty()){
			z=st.top();
			st.pop();
			if(!st.empty()){
				if(z>st.top()){
					v.push_back(z);
					v.push_back(st.top());
					break;
				}
					
				else
					v.push_back(z);
			}
//			else
//				v.push_back(z);
		}
		z=!st.empty()?st.top():-1;
//		cout<<z<<endl;
		if(z==-1)
			cout<<-1<<endl;
		else{
			vector<int>::iterator it;
 			st.pop();
		    it = v.begin();
			sort(v.begin(),v.end());
			for(it=v.begin();it!=v.end();it++){
				if(*it>z){
					st.push(*it);
					v.erase(it);
					break;
				}
			}
			for(int i=0;i<v.size();i++)
				st.push(v[i]);
		}
		while(!st.empty()){
//			cout<<st.top()<<" ";
			v1.push_back(st.top());
			st.pop();
		}
		for(int i=v1.size()-1;i>=0;i--)
			cout<<v1[i];
		cout<<endl;
	}


	return 0;
}

