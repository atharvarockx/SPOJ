#include <iostream> 
using namespace std; 
  
long long int josephus(long long int n,long long int k) 
{ 
    if(n==1)
    	return 1;
    else{
    	
    	return (josephus(n-1,k)+k-1)%n +1;

	}
    	
} 
  
int main() 
{ 
    int a;
    cin>>a;
    while(a!=0){
//    	int k=7;
    	for(int i=1;i<a;i++){
			if(josephus(a-1,i-1)==13){
				cout<<i<<endl;
				break;
			}
    	}	
		cin>>a;
	} 
    
    return 0; 
}
