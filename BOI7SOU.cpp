#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
	ll n,m,c;
	vector<int>v;
	cin>>n>>m>>c;
	int a[n];
	multiset<int> s;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	 for(int i = 1; i <= n; i ++){
        s.insert(a[i]);
        if(i > m)
            s.erase(s.find(a[i - m]));
        if(i >= m)
            if(*(--s.end()) - (*s.begin()) <= c)
                v.push_back(i - m +2);
    }
    if(v.empty())
        cout<<"NONE"<<endl;
    else{
    	vector<int>::iterator i;
        for(i=v.begin();i!=v.end();i++)
            cout<<*i<<endl;
    }
//	int max=
	
	
	return 0;
}
