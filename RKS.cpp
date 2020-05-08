#include<bits/stdc++.h>

using namespace std;
map<long long int,long long int> mp,priority; 

bool sortByVal(const pair<long long int, long long int> &a, const pair<long long int, long long int> &b) 
{ 
    if(a.second>b.second)
		return true;
	if(a.second<b.second)
		return false;
	if(a.second==b.second ){
		if(priority[a.first]<priority[b.first])
			return true;
		else
			return false;
	}
		
 
} 

int main(){
	long long int n,c;
	cin>>n>>c;
	long long int i,a[n] ;
	vector<pair<long long int,long long int> > vec;
	for( i=0;i<n;i++)
		cin>>a[i];
	for (i = 0; i < n; i++) 
        mp[a[i]]++;
    for(i=n-1;i>=0;i--)
    	priority[a[i]]=i;
    map<long long int,long long int>::iterator it;
//    for(i = 1; i <= c; i++)
//    	cout<<i<<" "<<mp[i]<<endl;
    
    map<long long int, long long int> :: iterator it2;
  	for (it2=mp.begin(); it2!=mp.end(); it2++) 
  	{
    	vec.push_back(make_pair(it2->first, it2->second));
  	}

  	sort(vec.begin(), vec.end(), sortByVal); 
  	
  	for (int i = 0; i < vec.size(); i++)
	{
		for(int j=0;j<vec[i].second;j++)
			cout<<vec[i].first<<" ";
	}
	return 0;
}
