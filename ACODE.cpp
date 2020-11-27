#include<bits/stdc++.h>
using namespace std;
int dp[10000001]={0};
int main(){
	string s;
	cin>>s;
	s="a"+s;
	while(s!="a0"){
		dp[0]=1;
		dp[1]=1;
		int i;
		dp[10000001]={0};
		for(i=1;i<=s.size();i++){
			if(s[i]-'0'!=0)
				dp[i]=dp[i-1];
			int x=(s[i-1]-'0')*10+(s[i]-'0');
			if(x>=10 && x<=26){
				dp[i]+=dp[i-2];
			}
//			cout<<i<<" "<<dp[i+1]<<endl;
		}
		cout<<dp[s.size()]<<endl;
		cin>>s;
	}
	return 0;
}
