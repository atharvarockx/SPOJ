#include<bits/stdc++.h>

using namespace std;

int main(){
	long long n,k,m,x,sum=0;
	cin>>n;
	multiset<long long > s;
	while(n--){
		cin>>m;
		for(int i=0;i<m;i++){
			cin>>x;
			s.insert(x);
		}
		multiset<long long>::iterator it1,it3;
		set<long long>::reverse_iterator it2;
		
		it3=s.end();
		it3--;
		sum+=*it3;
		s.erase(*it3);
		it1=s.begin();
		sum=sum-*it1;
		s.erase(*it1);
		
//		cout<<*it2-*it1<<endl;
//		s.erase(*it1);
//		it2=s.rbegin();
//		s.erase(*it2);
		
	}
	cout<<sum;
	return 0;
}
