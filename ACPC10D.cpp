#include<bits/stdc++.h>
using namespace std;
int fmin(int x, int y)
{
    if(x<=y)
        return x;
    else
        return y;
}
int  main(){
	int t,n,x;
	cin>>n;
	int m=1;
	while(n!=0){
		int a[n][3];
		for(int i=0;i<n;i++){
			for(int j=0;j<3;j++)
				cin>>a[i][j];
		}
		
		int min,ans=0;
		a[0][2]+=a[0][1];
        a[1][0]+=a[0][1];
        min=fmin(fmin(a[0][1],a[0][2]),a[1][0]);
        a[1][1]+=min;
        min=fmin(fmin(a[0][1],a[0][2]),a[1][1]);
        a[1][2]+=min;
		for(int i=2;i<n;i++){
			min=fmin(a[i-1][0],a[i-1][1]);
            a[i][0]+=min;
            min=fmin(fmin(fmin(a[i][0],a[i-1][0]),a[i-1][1]),a[i-1][2]);
            a[i][1]+=min;
            min=fmin(fmin(a[i][1],a[i-1][1]),a[i-1][2]);
            a[i][2]+=min;
			
		}
		
		cout<<m<<". "<<a[n-1][1]<<endl;
		m++;
		cin>>n;
	}
	return 0;
}
