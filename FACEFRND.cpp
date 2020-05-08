#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m,x,y;
	set <int>s;
	set <int>a;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>y;
		a.insert(y);
		cin>>m;
		for(int j=0;j<m;j++){
			cin>>x;
			if(a.find(x)==a.end())
				s.insert(x);
		}
		if(s.find(y)!=s.end())
			s.erase(s.find(y));	
	}
	cout<<s.size();
	return 0;
}
